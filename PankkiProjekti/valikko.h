#ifndef VALIKKO_H
#define VALIKKO_H

#include <QWidget>

namespace Ui {
class Valikko;
}

class Valikko : public QWidget
{
    Q_OBJECT

public:
    explicit Valikko(QWidget *parent = nullptr);
    ~Valikko();
    QString getTunnistautuminen() const;
    void setTunnistautuminen(const QString &value);

private slots:
    void on_btnNosta_clicked();

    void on_btnSaldo_clicked();

    void on_btnTilitapahtumat_clicked();

    void on_btnPeruuta_clicked();

private:
    Ui::Valikko *ui;
    QString Tunnistautuminen;
};

#endif // VALIKKO_H
