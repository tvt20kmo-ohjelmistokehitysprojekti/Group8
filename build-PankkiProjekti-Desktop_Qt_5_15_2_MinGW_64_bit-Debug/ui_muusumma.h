/********************************************************************************
** Form generated from reading UI file 'muusumma.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUUSUMMA_H
#define UI_MUUSUMMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MuuSumma
{
public:
    QLineEdit *lineEditMuuSumma;
    QLabel *labelMuuSumma;
    QPushButton *btnNostaMuu;
    QPushButton *btnPeruuta;

    void setupUi(QWidget *MuuSumma)
    {
        if (MuuSumma->objectName().isEmpty())
            MuuSumma->setObjectName(QString::fromUtf8("MuuSumma"));
        MuuSumma->resize(600, 600);
        lineEditMuuSumma = new QLineEdit(MuuSumma);
        lineEditMuuSumma->setObjectName(QString::fromUtf8("lineEditMuuSumma"));
        lineEditMuuSumma->setGeometry(QRect(240, 210, 171, 41));
        labelMuuSumma = new QLabel(MuuSumma);
        labelMuuSumma->setObjectName(QString::fromUtf8("labelMuuSumma"));
        labelMuuSumma->setGeometry(QRect(60, 200, 171, 61));
        QFont font;
        font.setPointSize(18);
        labelMuuSumma->setFont(font);
        btnNostaMuu = new QPushButton(MuuSumma);
        btnNostaMuu->setObjectName(QString::fromUtf8("btnNostaMuu"));
        btnNostaMuu->setGeometry(QRect(250, 260, 131, 51));
        btnNostaMuu->setFont(font);
        btnPeruuta = new QPushButton(MuuSumma);
        btnPeruuta->setObjectName(QString::fromUtf8("btnPeruuta"));
        btnPeruuta->setGeometry(QRect(250, 320, 121, 51));
        btnPeruuta->setFont(font);

        retranslateUi(MuuSumma);

        QMetaObject::connectSlotsByName(MuuSumma);
    } // setupUi

    void retranslateUi(QWidget *MuuSumma)
    {
        MuuSumma->setWindowTitle(QCoreApplication::translate("MuuSumma", "Form", nullptr));
        labelMuuSumma->setText(QCoreApplication::translate("MuuSumma", "Muu summa:", nullptr));
        btnNostaMuu->setText(QCoreApplication::translate("MuuSumma", "Nosta", nullptr));
        btnPeruuta->setText(QCoreApplication::translate("MuuSumma", "Peruuta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MuuSumma: public Ui_MuuSumma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUUSUMMA_H
