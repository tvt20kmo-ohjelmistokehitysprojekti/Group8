/********************************************************************************
** Form generated from reading UI file 'valikko.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIKKO_H
#define UI_VALIKKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Valikko
{
public:
    QPushButton *btnNosta;
    QPushButton *btnSaldo;
    QPushButton *btnTilitapahtumat;
    QPushButton *btnPeruuta;
    QLabel *labelNaytaSaldo;
    QLabel *labelTilitapahtumat;

    void setupUi(QWidget *Valikko)
    {
        if (Valikko->objectName().isEmpty())
            Valikko->setObjectName(QString::fromUtf8("Valikko"));
        Valikko->resize(600, 600);
        btnNosta = new QPushButton(Valikko);
        btnNosta->setObjectName(QString::fromUtf8("btnNosta"));
        btnNosta->setGeometry(QRect(10, 120, 241, 91));
        QFont font;
        font.setPointSize(18);
        btnNosta->setFont(font);
        btnSaldo = new QPushButton(Valikko);
        btnSaldo->setObjectName(QString::fromUtf8("btnSaldo"));
        btnSaldo->setGeometry(QRect(10, 230, 241, 91));
        btnSaldo->setFont(font);
        btnTilitapahtumat = new QPushButton(Valikko);
        btnTilitapahtumat->setObjectName(QString::fromUtf8("btnTilitapahtumat"));
        btnTilitapahtumat->setGeometry(QRect(10, 340, 241, 91));
        btnTilitapahtumat->setFont(font);
        btnPeruuta = new QPushButton(Valikko);
        btnPeruuta->setObjectName(QString::fromUtf8("btnPeruuta"));
        btnPeruuta->setGeometry(QRect(10, 530, 161, 61));
        btnPeruuta->setFont(font);
        labelNaytaSaldo = new QLabel(Valikko);
        labelNaytaSaldo->setObjectName(QString::fromUtf8("labelNaytaSaldo"));
        labelNaytaSaldo->setGeometry(QRect(300, 230, 291, 91));
        labelNaytaSaldo->setFont(font);
        labelTilitapahtumat = new QLabel(Valikko);
        labelTilitapahtumat->setObjectName(QString::fromUtf8("labelTilitapahtumat"));
        labelTilitapahtumat->setGeometry(QRect(300, 120, 291, 311));

        retranslateUi(Valikko);

        QMetaObject::connectSlotsByName(Valikko);
    } // setupUi

    void retranslateUi(QWidget *Valikko)
    {
        Valikko->setWindowTitle(QCoreApplication::translate("Valikko", "Form", nullptr));
        btnNosta->setText(QCoreApplication::translate("Valikko", "Nosta", nullptr));
        btnSaldo->setText(QCoreApplication::translate("Valikko", "Saldo", nullptr));
        btnTilitapahtumat->setText(QCoreApplication::translate("Valikko", "Tilitapahtumat", nullptr));
        btnPeruuta->setText(QCoreApplication::translate("Valikko", "Peruuta", nullptr));
        labelNaytaSaldo->setText(QString());
        labelTilitapahtumat->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Valikko: public Ui_Valikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIKKO_H
