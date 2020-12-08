#ifndef SALDO_H
#define SALDO_H

#include <QWidget>

namespace Ui {
class Saldo;
}

class Saldo : public QWidget
{
    Q_OBJECT

public:
    explicit Saldo(QWidget *parent = nullptr);
    ~Saldo();
    QString getTunnistautuminen() const;
    void setTunnistautuminen(const QString &value);

private slots:
    void on_btnPeruutaSaldo_clicked();

private:
    Ui::Saldo *ui;
    QString Tunnistautuminen;
};

#endif // SALDO_H
