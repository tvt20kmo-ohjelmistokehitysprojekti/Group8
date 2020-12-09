#include "valikko.h"
#include "saldo.h"
#include "ui_saldo.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>
#include <saldo.h>

Saldo::Saldo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Saldo)
{
    ui->setupUi(this);
}


Saldo::~Saldo()
{
    delete ui;
    QString id=getTunnistautuminen();
QNetworkRequest request(QUrl("http://www.students.oamk.fi/~c9pasa02/Group8/index.php/api/debit?idDebit&Saldo="+id));
request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        QString username="admin";
        QString password="1234";
        QString concatenatedCredentials = username + ":" + password;
            QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
            QString headerData = "Basic " + data;
            request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
        QNetworkAccessManager nam;
        QNetworkReply *reply = nam.get(request);
        while (!reply->isFinished() )
        {
            qApp->processEvents();
        }
        QByteArray response_data = reply->readAll();
        QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
        QJsonArray jsarr = json_doc.array();
        QString log;
        foreach (const QJsonValue &value, jsarr)
        {
            QJsonObject jsob = value.toObject();
            log+=jsob["Saldo"].toString()+" €";
           // reply->deleteLater();
        }
        ui->lineEditSaldo->setText(log);
        ui->labelNaytaSaldo->setText(log);
}

QString Saldo::getTunnistautuminen() const
{
    return Tunnistautuminen;
}
    void Saldo::setTunnistautuminen(const QString &value)
    {
        Tunnistautuminen=value;
    }

void Saldo::on_btnPeruutaSaldo_clicked()
{
    hide();
    Valikko *va = new Valikko();
    va->show();
}
