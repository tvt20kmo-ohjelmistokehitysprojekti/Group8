/********************************************************************************
** Form generated from reading UI file 'tilitapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILITAPAHTUMAT_H
#define UI_TILITAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tilitapahtumat
{
public:
    QLabel *labelTilitapahtumat;
    QPushButton *btnPeruuta;
    QTableView *tableView;

    void setupUi(QWidget *Tilitapahtumat)
    {
        if (Tilitapahtumat->objectName().isEmpty())
            Tilitapahtumat->setObjectName(QString::fromUtf8("Tilitapahtumat"));
        Tilitapahtumat->resize(600, 600);
        labelTilitapahtumat = new QLabel(Tilitapahtumat);
        labelTilitapahtumat->setObjectName(QString::fromUtf8("labelTilitapahtumat"));
        labelTilitapahtumat->setGeometry(QRect(150, 0, 201, 41));
        QFont font;
        font.setPointSize(18);
        labelTilitapahtumat->setFont(font);
        btnPeruuta = new QPushButton(Tilitapahtumat);
        btnPeruuta->setObjectName(QString::fromUtf8("btnPeruuta"));
        btnPeruuta->setGeometry(QRect(100, 510, 331, 61));
        btnPeruuta->setFont(font);
        tableView = new QTableView(Tilitapahtumat);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(60, 60, 431, 421));

        retranslateUi(Tilitapahtumat);

        QMetaObject::connectSlotsByName(Tilitapahtumat);
    } // setupUi

    void retranslateUi(QWidget *Tilitapahtumat)
    {
        Tilitapahtumat->setWindowTitle(QCoreApplication::translate("Tilitapahtumat", "Form", nullptr));
        labelTilitapahtumat->setText(QCoreApplication::translate("Tilitapahtumat", "Tilitapahtumat:", nullptr));
        btnPeruuta->setText(QCoreApplication::translate("Tilitapahtumat", "Peruuta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tilitapahtumat: public Ui_Tilitapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILITAPAHTUMAT_H
