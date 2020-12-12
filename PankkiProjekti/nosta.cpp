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
#include <QHttpPart>
#include <QJsonDocument>
#include <QJsonObject>
#include <qjsondocument.h>
#include <QUrlQuery>
#include <QUrl>

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

void Nosta::setTunnistautuminen2(const QString &value)
{
    Tunnistautuminen2=value;
}

QString Nosta::getTunnistautuminen2() const
{
    return Tunnistautuminen2;
}

void Nosta::on_btn20_clicked()
{
    QString id, summa;
    id=getTunnistautuminen2();
    summa="20";
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
        QString id=getTunnistautuminen2();
        NostoOnnistui *nosto = new NostoOnnistui(summa+" Nostettu.");
        nosto->setTunnistautuminen4(id);
        nosto->show();
    }
    else
    {
        hide();
        QString id=getTunnistautuminen2();
        NostoOnnistui *nosto = new NostoOnnistui("Nosto epäonnistui.");
        nosto->setTunnistautuminen4(id);
        nosto->show();
    }
}

void Nosta::on_btn40_clicked()
{
    QString id, summa;
    id=getTunnistautuminen2();
    summa="40";
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
        QString id=getTunnistautuminen2();
        NostoOnnistui *nosto = new NostoOnnistui(summa+" Nostettu.");
        nosto->setTunnistautuminen4(id);
        nosto->show();
    }
    else
    {
        hide();
        QString id=getTunnistautuminen2();
        NostoOnnistui *nosto = new NostoOnnistui("Nosto epäonnistui.");
        nosto->setTunnistautuminen4(id);
        nosto->show();
    }
}

void Nosta::on_btn50_clicked()
{
    QString id, summa;
    id=getTunnistautuminen2();
    summa="50";
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
        QString id=getTunnistautuminen2();
        NostoOnnistui *nosto = new NostoOnnistui(summa+" Nostettu.");
        nosto->setTunnistautuminen4(id);
        nosto->show();
    }
    else
    {
        hide();
        QString id=getTunnistautuminen2();
        NostoOnnistui *nosto = new NostoOnnistui("Nosto epäonnistui.");
        nosto->setTunnistautuminen4(id);
        nosto->show();
    }
}

void Nosta::on_btn100_clicked()
{
    QString id, summa;
    id=getTunnistautuminen2();
    summa="100";
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
        QString id=getTunnistautuminen2();
        NostoOnnistui *nosto = new NostoOnnistui(summa+" Nostettu.");
        nosto->setTunnistautuminen4(id);
        nosto->show();
    }
    else
    {
        hide();
        QString id=getTunnistautuminen2();
        NostoOnnistui *nosto = new NostoOnnistui("Nosto epäonnistui.");
        nosto->setTunnistautuminen4(id);
        nosto->show();
    }
}

void Nosta::on_btnMuu_clicked()
{
    hide();
    QString id=getTunnistautuminen2();
    MuuSumma *ms = new MuuSumma();
    ms->setTunnistautuminen3(id);
    ms->show();
}

void Nosta::on_btnPeruuta_clicked()
{
    hide();
    QString id=getTunnistautuminen2();
    Valikko *va = new Valikko();
    va->setTunnistautuminen(id);
    va->show();
}



void Nosta::on_btnLopeta_clicked()
{
    QApplication::quit();
}
