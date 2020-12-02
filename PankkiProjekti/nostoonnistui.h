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
    explicit NostoOnnistui(QWidget *parent = nullptr);
    ~NostoOnnistui();

private:
    Ui::NostoOnnistui *ui;
};

#endif // NOSTOONNISTUI_H
