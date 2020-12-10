#include "nosta.h"
#include "ui_nosta.h"
#include "valikko.h"
#include "muusumma.h"
#include "nostoonnistui.h"
#include "mainwindow.h"
#include "saldo.h"
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/qnetworkrequest.h>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/qnetworkaccessmanager.h>
#include <QtNetwork/qnetworkreply.h>
#include <QJsonDocument>
#include <QJsonObject>
#include <qjsondocument.h>

Nosta::Nosta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nosta)
{
    ui->setupUi(this);
}

Nosta::~Nosta()
{
    delete ui;
}

void Nosta::on_btn20_clicked()
{
    /*
    QString id, Saldo;
    id=getTunnistautuminen();
    Saldo="-20";
    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~c9pasa02/Group8/index.php/api/debit/index_put/?id="+id) );
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QString username="admin";
    QString password="1234";
    QString concatenatedCredentials = username + ":" + password;
    QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    QJsonObject json;
    json.insert("idDebit",id);
    json.insert("Saldo",Saldo);
    QNetworkAccessManager nam;
    QNetworkReply *reply = nam.put(request, QJsonDocument(json).toJson() );
    while (!reply->isFinished() )
    {
        qApp->processEvents();
    }
    QByteArray response_data = reply->readAll();
    qDebug()<<response_data;
    hide();
    NostoOnnistui *nosto = new NostoOnnistui("20€ Nostettu.");
    nosto->show();
    */

    QString id, summa;
    id=getTunnistautuminen();
    summa="20";
    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~c9pasa02/Group8/index.php/api/debit/index_put/") );
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QString username="admin";
    QString password="1234";
    QString concatenatedCredentials = username + ":" + password;
    QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    QJsonObject json;
    json.insert("id",id);
    // if
    json.insert("Saldo",summa); // tänne joku if tarkistamaan että summa => saldo tai tuohon alemmas
    QNetworkAccessManager nam;
    QNetworkReply *reply = nam.put(request, QJsonDocument(json).toJson() );
    while (!reply->isFinished() )
    {
        qApp->processEvents();
    }
    QByteArray response_data = reply->readAll();
    qDebug()<<response_data;
    // tämä loppu on vasta arvausta :)
    if(response_data=="false")
    {
        hide();
        NostoOnnistui *nosto = new NostoOnnistui("Nosto epäonnistui.");
        nosto->show();
    }
    else
    {
        hide();
        NostoOnnistui *nosto = new NostoOnnistui("20€ Nostettu.");
        nosto->show();
    }
}

void Nosta::on_btn40_clicked()
{
    hide();
    NostoOnnistui *nosto = new NostoOnnistui("40€ Nostettu.");
    nosto->show();
}

void Nosta::on_btn50_clicked()
{
    hide();
    NostoOnnistui *nosto = new NostoOnnistui("50€ Nostettu.");
    nosto->show();
}

void Nosta::on_btn100_clicked()
{
    hide();
    NostoOnnistui *nosto = new NostoOnnistui("100€ Nostettu.");
    nosto->show();
}

void Nosta::on_btnMuu_clicked()
{
    hide();
    MuuSumma *ms = new MuuSumma();
    ms->show();
}

void Nosta::on_btnPeruuta_clicked()
{
    hide();
    Valikko *va = new Valikko();
    va->show();
}

QString Nosta::getTunnistautuminen() const
{
    return Tunnistautuminen;
}

void Nosta::setTunnistautuminen(const QString &value)
{
    Tunnistautuminen=value;
}
