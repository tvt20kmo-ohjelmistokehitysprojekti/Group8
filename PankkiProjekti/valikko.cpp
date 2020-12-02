#include "valikko.h"
#include "ui_valikko.h"

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

void Valikko::on_btnNosta_clicked()
{

}

void Valikko::on_btnSaldo_clicked()
{

}

void Valikko::on_btnTilitapahtumat_clicked()
{

}

void Valikko::on_btnPeruuta_clicked()
{

}
