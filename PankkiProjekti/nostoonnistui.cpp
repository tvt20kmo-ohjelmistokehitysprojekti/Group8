#include "nosta.h"
#include "nostoonnistui.h"
#include "ui_nostoonnistui.h"
#include "valikko.h"

NostoOnnistui::NostoOnnistui(QString summa, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NostoOnnistui)
{
    ui->setupUi(this);
    ui->labelOnnistuiko->setText(summa);
}

NostoOnnistui::~NostoOnnistui()
{
    delete ui;
}

QString NostoOnnistui::getTunnistautuminen4() const
{
    return Tunnistautuminen4;
}

void NostoOnnistui::setTunnistautuminen4(const QString &value)
{
    Tunnistautuminen4=value;
}

void NostoOnnistui::on_btnLopeta_clicked()
{
    QApplication::quit();
}

void NostoOnnistui::on_btnPeruuta_clicked()
{
    hide();
    QString id=getTunnistautuminen4();
    Valikko *va = new Valikko();
    va->setTunnistautuminen(id);
    va->show();
}

