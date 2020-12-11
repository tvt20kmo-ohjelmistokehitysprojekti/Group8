#include "nostoonnistui.h"
#include "ui_nostoonnistui.h"

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

void NostoOnnistui::on_btnLopeta_clicked()
{
    QApplication::quit();
}
