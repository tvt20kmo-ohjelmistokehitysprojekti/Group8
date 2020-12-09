#ifndef NOSTA_H
#define NOSTA_H

#include <QWidget>

namespace Ui {
class Nosta;
}

class Nosta : public QWidget
{
    Q_OBJECT

public:
    explicit Nosta(QWidget *parent = nullptr);
    ~Nosta();
    QString getTunnistautuminen() const;
    void setTunnistautuminen(const QString &value);

private slots:
    void on_btn20_clicked();

    void on_btn40_clicked();

    void on_btn50_clicked();

    void on_btn100_clicked();

    void on_btnMuu_clicked();

    void on_btnPeruuta_clicked();

private:
    Ui::Nosta *ui;
     QString Tunnistautuminen;
};

#endif // NOSTA_H
