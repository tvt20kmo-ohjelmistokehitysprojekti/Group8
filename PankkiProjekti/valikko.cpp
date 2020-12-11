#include "valikko.h"
#include "ui_valikko.h"
#include "nosta.h"
#include "saldo.h"
#include "tilitapahtumat.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>

Valikko::Valikko(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Valikko)
{
    ui->setupUi(this);
}

Valikko::~Valikko()
{
    delete ui;
}

QString Valikko::getTunnistautuminen() const
{
    return Tunnistautuminen;
}

void Valikko::setTunnistautuminen(const QString &value)
{
    Tunnistautuminen=value;
}

void Valikko::on_btnNosta_clicked()
{
    hide();
    Nosta *no = new Nosta();
    no->show();
}

void Valikko::on_btnSaldo_clicked()
{
    QString id=getTunnistautuminen();
    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~c9pasa02/Group8/index.php/api/debit/index_get/?id="+id) );
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
    QString saldo;
    foreach (const QJsonValue &value, jsarr)
    {
        QJsonObject jsob = value.toObject();
        saldo+=jsob["Saldo"].toString()+"€";
    }
    ui->labelNaytaSaldo->setText(saldo);
}

void Valikko::on_btnTilitapahtumat_clicked()
{
    QString id=getTunnistautuminen();
    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~c9pasa02/Group8/index.php/api/tilitapahtumat/index_get/?id="+id) );
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
    QString tapahtumat;
    foreach (const QJsonValue &value, jsarr)
    {
        QJsonObject jsob = value.toObject();
        tapahtumat+=jsob["Pvm"].toString()+", "+jsob["tapahtuma"].toString()+" "+jsob["summa"].toString()+" €"+"\r";
    }
    ui->labelTilitapahtumat->setText(tapahtumat);
}

void Valikko::on_btnPeruuta_clicked()
{
    QApplication::quit();
}
