#ifndef MUUSUMMA_H
#define MUUSUMMA_H

#include <QWidget>

namespace Ui {
class MuuSumma;
}

class MuuSumma : public QWidget
{
    Q_OBJECT

public:
    explicit MuuSumma(QWidget *parent = nullptr);
    ~MuuSumma();
    QString getTunnistautuminen3() const;
    void setTunnistautuminen3(const QString &value);


private slots:
    void on_btnNostaMuu_clicked();

    void on_btnPeruuta_clicked();

private:
    Ui::MuuSumma *ui;
    QString Tunnistautuminen3;
};

#endif // MUUSUMMA_H
