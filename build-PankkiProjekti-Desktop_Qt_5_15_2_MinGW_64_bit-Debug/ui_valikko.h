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

    void setupUi(QWidget *Valikko)
    {
        if (Valikko->objectName().isEmpty())
            Valikko->setObjectName(QString::fromUtf8("Valikko"));
        Valikko->resize(600, 600);
        btnNosta = new QPushButton(Valikko);
        btnNosta->setObjectName(QString::fromUtf8("btnNosta"));
        btnNosta->setGeometry(QRect(170, 100, 241, 91));
        QFont font;
        font.setPointSize(18);
        btnNosta->setFont(font);
        btnSaldo = new QPushButton(Valikko);
        btnSaldo->setObjectName(QString::fromUtf8("btnSaldo"));
        btnSaldo->setGeometry(QRect(170, 210, 231, 81));
        btnSaldo->setFont(font);
        btnTilitapahtumat = new QPushButton(Valikko);
        btnTilitapahtumat->setObjectName(QString::fromUtf8("btnTilitapahtumat"));
        btnTilitapahtumat->setGeometry(QRect(170, 310, 231, 91));
        btnTilitapahtumat->setFont(font);
        btnPeruuta = new QPushButton(Valikko);
        btnPeruuta->setObjectName(QString::fromUtf8("btnPeruuta"));
        btnPeruuta->setGeometry(QRect(200, 450, 161, 61));
        btnPeruuta->setFont(font);
        labelNaytaSaldo = new QLabel(Valikko);
        labelNaytaSaldo->setObjectName(QString::fromUtf8("labelNaytaSaldo"));
        labelNaytaSaldo->setGeometry(QRect(114, 50, 341, 41));
        labelNaytaSaldo->setFont(font);

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
    } // retranslateUi

};

namespace Ui {
    class Valikko: public Ui_Valikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIKKO_H
