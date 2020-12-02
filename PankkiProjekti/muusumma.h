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

private slots:
    void on_btnNostaMuu_clicked();

private:
    Ui::MuuSumma *ui;
};

#endif // MUUSUMMA_H
