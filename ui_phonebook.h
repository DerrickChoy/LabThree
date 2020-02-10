/********************************************************************************
** Form generated from reading UI file 'phonebook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONEBOOK_H
#define UI_PHONEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Phonebook
{
public:
    QAction *actionAdd_an_Address_Book;
    QAction *actionExit;
    QWidget *centralwidget;
    QTableView *tableView;
    QLabel *displayLabel;
    QMenuBar *menubar;
    QMenu *menuTools;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Phonebook)
    {
        if (Phonebook->objectName().isEmpty())
            Phonebook->setObjectName(QString::fromUtf8("Phonebook"));
        Phonebook->resize(800, 600);
        actionAdd_an_Address_Book = new QAction(Phonebook);
        actionAdd_an_Address_Book->setObjectName(QString::fromUtf8("actionAdd_an_Address_Book"));
        actionExit = new QAction(Phonebook);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(Phonebook);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(400, 20, 361, 511));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
        displayLabel = new QLabel(centralwidget);
        displayLabel->setObjectName(QString::fromUtf8("displayLabel"));
        displayLabel->setGeometry(QRect(40, 30, 241, 61));
        Phonebook->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Phonebook);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        Phonebook->setMenuBar(menubar);
        statusbar = new QStatusBar(Phonebook);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Phonebook->setStatusBar(statusbar);

        menubar->addAction(menuTools->menuAction());
        menuTools->addAction(actionAdd_an_Address_Book);
        menuTools->addSeparator();
        menuTools->addAction(actionExit);

        retranslateUi(Phonebook);

        QMetaObject::connectSlotsByName(Phonebook);
    } // setupUi

    void retranslateUi(QMainWindow *Phonebook)
    {
        Phonebook->setWindowTitle(QApplication::translate("Phonebook", "Phonebook", nullptr));
        actionAdd_an_Address_Book->setText(QApplication::translate("Phonebook", "Add an Address Book...", nullptr));
        actionExit->setText(QApplication::translate("Phonebook", "Exit", nullptr));
        displayLabel->setText(QApplication::translate("Phonebook", "XXX-XXX-XXXX", nullptr));
        menuTools->setTitle(QApplication::translate("Phonebook", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Phonebook: public Ui_Phonebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONEBOOK_H
