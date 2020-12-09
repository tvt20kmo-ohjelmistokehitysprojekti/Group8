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
        lineEditMuuSumma->setGeometry(QRect(210, 250, 181, 61));
        QFont font;
        font.setPointSize(18);
        lineEditMuuSumma->setFont(font);
        labelMuuSumma = new QLabel(MuuSumma);
        labelMuuSumma->setObjectName(QString::fromUtf8("labelMuuSumma"));
        labelMuuSumma->setGeometry(QRect(50, 250, 161, 61));
        labelMuuSumma->setFont(font);
        btnNostaMuu = new QPushButton(MuuSumma);
        btnNostaMuu->setObjectName(QString::fromUtf8("btnNostaMuu"));
        btnNostaMuu->setGeometry(QRect(180, 330, 241, 91));
        btnNostaMuu->setFont(font);
        btnPeruuta = new QPushButton(MuuSumma);
        btnPeruuta->setObjectName(QString::fromUtf8("btnPeruuta"));
        btnPeruuta->setGeometry(QRect(10, 530, 161, 61));
        btnPeruuta->setFont(font);

        retranslateUi(MuuSumma);

        QMetaObject::connectSlotsByName(MuuSumma);
    } // setupUi

    void retranslateUi(QWidget *MuuSumma)
    {
        MuuSumma->setWindowTitle(QCoreApplication::translate("MuuSumma", "Form", nullptr));
        labelMuuSumma->setText(QCoreApplication::translate("MuuSumma", "Sy\303\266t\303\244 summa:", nullptr));
        btnNostaMuu->setText(QCoreApplication::translate("MuuSumma", "Nosta", nullptr));
        btnPeruuta->setText(QCoreApplication::translate("MuuSumma", "Peruuta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MuuSumma: public Ui_MuuSumma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUUSUMMA_H
