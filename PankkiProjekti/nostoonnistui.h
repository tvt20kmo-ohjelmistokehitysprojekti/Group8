#ifndef NOSTOONNISTUI_H
#define NOSTOONNISTUI_H

#include <QWidget>

namespace Ui {
class NostoOnnistui;
}

class NostoOnnistui : public QWidget
{
    Q_OBJECT

public:
    explicit NostoOnnistui(QString name, QWidget *parent = nullptr);
    ~NostoOnnistui();

private slots:
    void on_btnLopeta_clicked();

    void on_btnPeruuta_clicked();

private:
    Ui::NostoOnnistui *ui;
};

#endif // NOSTOONNISTUI_H
