/********************************************************************************
** Form generated from reading UI file 'nosta.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTA_H
#define UI_NOSTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nosta
{
public:
    QPushButton *btn20;
    QPushButton *btn40;
    QPushButton *btn50;
    QPushButton *btn100;
    QPushButton *btnMuu;
    QPushButton *btnPeruuta;

    void setupUi(QWidget *Nosta)
    {
        if (Nosta->objectName().isEmpty())
            Nosta->setObjectName(QString::fromUtf8("Nosta"));
        Nosta->resize(600, 600);
        btn20 = new QPushButton(Nosta);
        btn20->setObjectName(QString::fromUtf8("btn20"));
        btn20->setGeometry(QRect(40, 130, 241, 91));
        QFont font;
        font.setPointSize(18);
        btn20->setFont(font);
        btn40 = new QPushButton(Nosta);
        btn40->setObjectName(QString::fromUtf8("btn40"));
        btn40->setGeometry(QRect(40, 240, 241, 91));
        btn40->setFont(font);
        btn50 = new QPushButton(Nosta);
        btn50->setObjectName(QString::fromUtf8("btn50"));
        btn50->setGeometry(QRect(40, 350, 241, 91));
        QFont font1;
        font1.setPointSize(19);
        btn50->setFont(font1);
        btn100 = new QPushButton(Nosta);
        btn100->setObjectName(QString::fromUtf8("btn100"));
        btn100->setGeometry(QRect(320, 130, 241, 91));
        btn100->setFont(font);
        btnMuu = new QPushButton(Nosta);
        btnMuu->setObjectName(QString::fromUtf8("btnMuu"));
        btnMuu->setGeometry(QRect(320, 240, 241, 91));
        btnMuu->setFont(font);
        btnPeruuta = new QPushButton(Nosta);
        btnPeruuta->setObjectName(QString::fromUtf8("btnPeruuta"));
        btnPeruuta->setGeometry(QRect(10, 530, 161, 61));
        btnPeruuta->setFont(font);

        retranslateUi(Nosta);

        QMetaObject::connectSlotsByName(Nosta);
    } // setupUi

    void retranslateUi(QWidget *Nosta)
    {
        Nosta->setWindowTitle(QCoreApplication::translate("Nosta", "Form", nullptr));
        btn20->setText(QCoreApplication::translate("Nosta", "20\342\202\254", nullptr));
        btn40->setText(QCoreApplication::translate("Nosta", "40\342\202\254", nullptr));
        btn50->setText(QCoreApplication::translate("Nosta", "50\342\202\254", nullptr));
        btn100->setText(QCoreApplication::translate("Nosta", "100\342\202\254", nullptr));
        btnMuu->setText(QCoreApplication::translate("Nosta", "Muu summa", nullptr));
        btnPeruuta->setText(QCoreApplication::translate("Nosta", "Peruuta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nosta: public Ui_Nosta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTA_H
