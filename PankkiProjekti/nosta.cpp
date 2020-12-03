#include "nosta.h"
#include "ui_nosta.h"

#include "valikko.h"
#include "muusumma.h"
#include "nostoonnistui.h"

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
    hide();
    NostoOnnistui *nosto = new NostoOnnistui();
    nosto->show();
}

void Nosta::on_btn40_clicked()
{
    hide();
    NostoOnnistui *nosto = new NostoOnnistui();
    nosto->show();
}

void Nosta::on_btn50_clicked()
{
    hide();
    NostoOnnistui *nosto = new NostoOnnistui();
    nosto->show();
}

void Nosta::on_btn100_clicked()
{
    hide();
    NostoOnnistui *nosto = new NostoOnnistui();
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
