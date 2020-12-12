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
    QString getTunnistautuminen4() const;
    void setTunnistautuminen4(const QString &value);

private slots:
    void on_btnLopeta_clicked();

    void on_btnPeruuta_clicked();

private:
    Ui::NostoOnnistui *ui;
    QString Tunnistautuminen4;
};

#endif // NOSTOONNISTUI_H
