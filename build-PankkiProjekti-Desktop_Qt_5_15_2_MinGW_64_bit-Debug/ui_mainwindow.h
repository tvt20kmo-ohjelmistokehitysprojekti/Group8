/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnKirjaudu;
    QLabel *labelId;
    QLabel *labelPin;
    QLineEdit *lineEditId;
    QLineEdit *lineEditPin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnKirjaudu = new QPushButton(centralwidget);
        btnKirjaudu->setObjectName(QString::fromUtf8("btnKirjaudu"));
        btnKirjaudu->setGeometry(QRect(232, 310, 191, 51));
        QFont font;
        font.setPointSize(18);
        btnKirjaudu->setFont(font);
        labelId = new QLabel(centralwidget);
        labelId->setObjectName(QString::fromUtf8("labelId"));
        labelId->setGeometry(QRect(170, 180, 91, 31));
        labelId->setFont(font);
        labelPin = new QLabel(centralwidget);
        labelPin->setObjectName(QString::fromUtf8("labelPin"));
        labelPin->setGeometry(QRect(154, 250, 101, 31));
        labelPin->setFont(font);
        lineEditId = new QLineEdit(centralwidget);
        lineEditId->setObjectName(QString::fromUtf8("lineEditId"));
        lineEditId->setGeometry(QRect(270, 180, 151, 31));
        lineEditPin = new QLineEdit(centralwidget);
        lineEditPin->setObjectName(QString::fromUtf8("lineEditPin"));
        lineEditPin->setGeometry(QRect(270, 240, 161, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnKirjaudu->setText(QCoreApplication::translate("MainWindow", "Kirjaudu", nullptr));
        labelId->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        labelPin->setText(QCoreApplication::translate("MainWindow", "Pin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
