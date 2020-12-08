#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "valikko.h"
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/qnetworkrequest.h>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/qnetworkaccessmanager.h>
#include <QtNetwork/qnetworkreply.h>
#include <QJsonDocument>
#include <qjsondocument.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnKirjaudu_clicked()
{

        QString idKortti,PIN;
        idKortti=ui->lineEditId->text();
        PIN=ui->lineEditPin->text();
        QNetworkRequest request(QUrl("http://www.students.oamk.fi/~c9pasa02/Group8/index.php/api/login/index_post/?idKortti="+idKortti+"&PIN="+PIN));
            request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
            //Authenticate
            QString username="admin";
            QString password="1234";
            QString concatenatedCredentials = username + ":" + password;
               QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
               QString headerData = "Basic " + data;
               request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

            QNetworkAccessManager nam;
            QNetworkReply *reply = nam.get(request);
            while (!reply->isFinished())
            {
                qApp->processEvents();
            }
            QByteArray response_data = reply->readAll();

            qDebug()<<"DATA:"+response_data;

            reply->deleteLater();

            if(response_data=="true"){
                ui->labelLoginTest->setText("Right");
                hide();
                Valikko *va = new Valikko();
                   va->setTunnistautuminen(idKortti);
                va->show();

            }
            else {
                ui->labelLoginTest->setText("Väärä tunnus tai salasana.");
            }

}
