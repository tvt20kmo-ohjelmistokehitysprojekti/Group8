#include "valikko.h"
#include "saldo.h"
#include "ui_saldo.h"

Saldo::Saldo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Saldo)
{
    ui->setupUi(this);
}

Saldo::~Saldo()
{
    delete ui;
}

void Saldo::on_btnPeruutaSaldo_clicked()
{
    hide();
    Valikko *va = new Valikko();
    va->show();
}
