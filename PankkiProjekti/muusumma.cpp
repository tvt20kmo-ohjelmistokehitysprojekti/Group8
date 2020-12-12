#include "muusumma.h"
#include "ui_muusumma.h"
#include "nostoonnistui.h"
#include "nosta.h"
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/qnetworkrequest.h>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/qnetworkaccessmanager.h>
#include <QtNetwork/qnetworkreply.h>
#include <QHttpPart>
#include <QJsonDocument>
#include <QJsonObject>
#include <qjsondocument.h>
#include <QUrlQuery>
#include <QUrl>

MuuSumma::MuuSumma(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MuuSumma)
{
    ui->setupUi(this);
}

MuuSumma::~MuuSumma()
{
    delete ui;
}

QString MuuSumma::getTunnistautuminen3() const
{
    return Tunnistautuminen3;
}

void MuuSumma::setTunnistautuminen3(const QString &value)
{
    Tunnistautuminen3=value;
}

void MuuSumma::on_btnNostaMuu_clicked()
{
    QString id, summa;
    id=getTunnistautuminen3();
    summa=ui->lineEditMuuSumma->text();
    int summa2 = ui->lineEditMuuSumma->text().toInt();
    if(summa2==20 || summa2==40 || (summa2>=50 && summa2 %10==0))
    {
        QNetworkRequest request(QUrl("http://www.students.oamk.fi/~c9pasa02/Group8/index.php/api/nosto/debitNosto/") );
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json; charset=utf-8");
        QString username="admin";
        QString password="1234";
        QString concatenatedCredentials = username + ":" + password;
        QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
        QString headerData = "Basic " + data;
        request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
        QUrlQuery paramsQuery;
        paramsQuery.addQueryItem("id", id );
        paramsQuery.addQueryItem("summa", summa );
        QJsonObject json;
        json.insert("id", id );
        json.insert("summa", summa );
        QNetworkAccessManager nam;
        QNetworkReply *reply = nam.post(request, QJsonDocument(json).toJson() );
        while (!reply->isFinished() )
        {
            qApp->processEvents();
        }
        QByteArray response_data = reply->readAll();
        qDebug()<<response_data;
        if(response_data=="true")
        {
            hide();
            NostoOnnistui *nosto = new NostoOnnistui(summa+"€ nostettu");
            nosto->show();
        }
        else
        {
            hide();
            NostoOnnistui *nosto = new NostoOnnistui("Nosto epäonnistui.");
            nosto->show();
        }
    }
    else
    {
        hide();
        NostoOnnistui *nosto = new NostoOnnistui("Vain 20€ ja 50€ seteleitä.");
        nosto->show();
    }
}

void MuuSumma::on_btnPeruuta_clicked()
{
    hide();
    QString id=getTunnistautuminen3();
    Nosta *no = new Nosta();
    no->setTunnistautuminen2(id);
    no->show();
}
