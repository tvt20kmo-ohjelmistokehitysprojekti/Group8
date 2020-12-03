#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "valikko.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnKirjaudu_clicked()
{
    hide();
    Valikko *va = new Valikko();
    va->show();
}
