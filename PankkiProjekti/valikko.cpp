#include "valikko.h"
#include "ui_valikko.h"
#include "nosta.h"
#include "saldo.h"
#include "tilitapahtumat.h"

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
    hide();
    Saldo *sa = new Saldo();
    sa->show();
}

void Valikko::on_btnTilitapahtumat_clicked()
{
    hide();
    Tilitapahtumat *tt = new Tilitapahtumat();
    tt->show();
}

void Valikko::on_btnPeruuta_clicked()
{
    hide(); //TÄHÄN VOI VIELÄ JOS HALUAA ETTÄ SIIRTYISI TAKAISIN KIRJAUTUMISEEN
}
