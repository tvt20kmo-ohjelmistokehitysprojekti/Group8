#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QWidget>

namespace Ui {
class Tilitapahtumat;
}

class Tilitapahtumat : public QWidget
{
    Q_OBJECT

public:
    explicit Tilitapahtumat(QWidget *parent = nullptr);
    ~Tilitapahtumat();

private slots:
    void on_btnPeruuta_clicked();

private:
    Ui::Tilitapahtumat *ui;
};

#endif // TILITAPAHTUMAT_H
