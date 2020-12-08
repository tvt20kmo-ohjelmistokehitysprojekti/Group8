/********************************************************************************
** Form generated from reading UI file 'nostoonnistui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTOONNISTUI_H
#define UI_NOSTOONNISTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NostoOnnistui
{
public:
    QLabel *labelOnnistuiko;
    QPushButton *btnLopeta;

    void setupUi(QWidget *NostoOnnistui)
    {
        if (NostoOnnistui->objectName().isEmpty())
            NostoOnnistui->setObjectName(QString::fromUtf8("NostoOnnistui"));
        NostoOnnistui->resize(600, 600);
        labelOnnistuiko = new QLabel(NostoOnnistui);
        labelOnnistuiko->setObjectName(QString::fromUtf8("labelOnnistuiko"));
        labelOnnistuiko->setGeometry(QRect(90, 240, 441, 111));
        QFont font;
        font.setPointSize(18);
        labelOnnistuiko->setFont(font);
        btnLopeta = new QPushButton(NostoOnnistui);
        btnLopeta->setObjectName(QString::fromUtf8("btnLopeta"));
        btnLopeta->setGeometry(QRect(170, 370, 251, 71));
        btnLopeta->setFont(font);

        retranslateUi(NostoOnnistui);

        QMetaObject::connectSlotsByName(NostoOnnistui);
    } // setupUi

    void retranslateUi(QWidget *NostoOnnistui)
    {
        NostoOnnistui->setWindowTitle(QCoreApplication::translate("NostoOnnistui", "Form", nullptr));
        labelOnnistuiko->setText(QString());
        btnLopeta->setText(QCoreApplication::translate("NostoOnnistui", "Lopeta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NostoOnnistui: public Ui_NostoOnnistui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTOONNISTUI_H
