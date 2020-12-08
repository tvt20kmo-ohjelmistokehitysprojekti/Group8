/********************************************************************************
** Form generated from reading UI file 'saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDO_H
#define UI_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Saldo
{
public:
    QPushButton *btnPeruutaSaldo;
    QLineEdit *lineEditSaldo;
    QLabel *labelSaldo;

    void setupUi(QWidget *Saldo)
    {
        if (Saldo->objectName().isEmpty())
            Saldo->setObjectName(QString::fromUtf8("Saldo"));
        Saldo->resize(600, 600);
        btnPeruutaSaldo = new QPushButton(Saldo);
        btnPeruutaSaldo->setObjectName(QString::fromUtf8("btnPeruutaSaldo"));
        btnPeruutaSaldo->setGeometry(QRect(342, 387, 191, 71));
        QFont font;
        font.setPointSize(18);
        btnPeruutaSaldo->setFont(font);
        lineEditSaldo = new QLineEdit(Saldo);
        lineEditSaldo->setObjectName(QString::fromUtf8("lineEditSaldo"));
        lineEditSaldo->setGeometry(QRect(200, 180, 301, 81));
        labelSaldo = new QLabel(Saldo);
        labelSaldo->setObjectName(QString::fromUtf8("labelSaldo"));
        labelSaldo->setGeometry(QRect(60, 190, 81, 51));
        labelSaldo->setFont(font);

        retranslateUi(Saldo);

        QMetaObject::connectSlotsByName(Saldo);
    } // setupUi

    void retranslateUi(QWidget *Saldo)
    {
        Saldo->setWindowTitle(QCoreApplication::translate("Saldo", "Form", nullptr));
        btnPeruutaSaldo->setText(QCoreApplication::translate("Saldo", "Peruuta", nullptr));
        labelSaldo->setText(QCoreApplication::translate("Saldo", "Saldo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Saldo: public Ui_Saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDO_H
