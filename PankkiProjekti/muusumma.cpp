#include "muusumma.h"
#include "ui_muusumma.h"

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

}
