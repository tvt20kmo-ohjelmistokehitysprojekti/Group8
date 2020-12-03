#include "muusumma.h"
#include "ui_muusumma.h"
#include "nostoonnistui.h"
#include "nosta.h"

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

void MuuSumma::on_btnNostaMuu_clicked()
{
    hide();
    NostoOnnistui *nosto = new NostoOnnistui();
    nosto->show();
}

void MuuSumma::on_btnPeruuta_clicked()
{
    hide();
    Nosta *no = new Nosta();
    no->show();
}
