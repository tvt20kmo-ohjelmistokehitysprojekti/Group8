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
/*
void Nosta::on_btn20_clicked()
{
    QString id, summa;
    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~c9pasa02/Group8/index.php/api/nosto/nosto/?id="+id+"&?summa="summa) );
    request.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");
    QByteArray data;
    QUrl params;
    params.addQueryItem("userid","user");
    params.addQueryItem("apiKey","key");
    data.append(params.toString());
    data.remove(0,1);
    QNetworkReply *reply = nwam.post(request,data);
    return reply;

}*/

void Nosta::on_btn20_clicked()/*
{
    QString id, summa;
    id=getTunnistautuminen();
    summa="20";
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);

    QUrl url("https://accounts.google.com/o/oauth2/token");
    QNetworkRequest request(url);

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    QUrl params;
    QUrlQuery paramsQuery;
    paramsQuery.addQueryItem("summa", summa);
    // and so on..

    params.setQuery(paramsQuery);

    QObject::connect(manager, SIGNAL(finished(QNetworkReply *)), this, SLOT(replyFinished(QNetworkReply *)));

    manager->post(request, params.encodedQuery());
{
    QString client = new RestClient("http://www.students.oamk.fi/~c9pasa02/Group8/index.php/api/nosto");
          client.Timeout = -1;
          var request = new RestRequest(Method.POST);
          request.AddHeader("Authorization", "Basic YWRtaW46MTIzNA==");
          request.AddHeader("Content-Type", "application/x-www-form-urlencoded");
          request.AddParameter("id", "4");
          request.AddParameter("summa", "20");
          IRestResponse response = client.Execute(request);
          Console.WriteLine(response.Content);
}
{

    QString id, summa;
    id=getTunnistautuminen();
    summa="20";
    QNetworkAccessManager * manager = new QNetworkAccessManager(this);

    QUrl url("http://www.students.oamk.fi/~c9pasa02/Group8/index.php/api/nosto/debitNosto/");
    QNetworkRequest request(url);

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    QUrlQuery params;
    params.addQueryItem("id", "id");
    params.addQueryItem("summa", "summa");

    connect(manager, SIGNAL(finished(QNetworkReply *)), this, SLOT(replyFinished(QNetworkReply *)));

    manager->post(request, params.query().toUtf8());

}*/
{
    QString js="{\"attr\":\"value\"}";
    QString id, summa;
    id="4";//getTunnistautuminen();
    summa="20";
    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~c9pasa02/Group8/index.php/api/nosto/debitNosto/") );
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json; charset=utf-8");
    QString username="admin";
    QString password="1234";
    QString concatenatedCredentials = username + ":" + password;
    QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
    //QByteArray postData=js.toUtf8();
    //QUrl serviceUrl = new QUrl("http://www.students.oamk.fi/~c9pasa02/Group8/index.php/api/nosto/debitNosto/");
    //QNetworkRequest request(serviceUrl);
    //request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json; charset=utf-8");
    //networkManager->post(request,postData)
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    QUrlQuery paramsQuery;
    paramsQuery.addQueryItem("id", id);
    paramsQuery.addQueryItem("summa", summa);
    QJsonObject json;
    json.insert("id",id);
    json.insert("summa",summa);
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
        NostoOnnistui *nosto = new NostoOnnistui("20€ Nostettu.");
        nosto->show();
    }
    else
    {
        hide();
        NostoOnnistui *nosto = new NostoOnnistui("Nosto epäonnistui.");
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
