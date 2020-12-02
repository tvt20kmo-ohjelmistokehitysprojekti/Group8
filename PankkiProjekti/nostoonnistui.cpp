#include "nostoonnistui.h"
#include "ui_nostoonnistui.h"

NostoOnnistui::NostoOnnistui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NostoOnnistui)
{
    ui->setupUi(this);
}

NostoOnnistui::~NostoOnnistui()
{
    delete ui;
}
