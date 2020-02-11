/********************************************************************************
** Form generated from reading UI file 'phonebook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
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
#include <QtWidgets/QPushButton>
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
    QPushButton *threePushButton;
    QPushButton *fourPushButton;
    QPushButton *eightPushButton;
    QPushButton *sevenPushButton;
    QPushButton *ninePushButton;
    QPushButton *twoPushButton;
    QPushButton *sixPushButton;
    QPushButton *fivePushButton;
    QPushButton *onePushButton;
    QPushButton *zeroPushButton;
    QPushButton *threePushButton_11;
    QPushButton *threePushButton_12;
    QLabel *dialerDisplay;
    QPushButton *deleteButton;
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
        threePushButton = new QPushButton(centralwidget);
        threePushButton->setObjectName(QString::fromUtf8("threePushButton"));
        threePushButton->setGeometry(QRect(290, 90, 91, 91));
        fourPushButton = new QPushButton(centralwidget);
        fourPushButton->setObjectName(QString::fromUtf8("fourPushButton"));
        fourPushButton->setGeometry(QRect(40, 210, 91, 91));
        eightPushButton = new QPushButton(centralwidget);
        eightPushButton->setObjectName(QString::fromUtf8("eightPushButton"));
        eightPushButton->setGeometry(QRect(140, 350, 91, 91));
        sevenPushButton = new QPushButton(centralwidget);
        sevenPushButton->setObjectName(QString::fromUtf8("sevenPushButton"));
        sevenPushButton->setGeometry(QRect(30, 330, 91, 91));
        ninePushButton = new QPushButton(centralwidget);
        ninePushButton->setObjectName(QString::fromUtf8("ninePushButton"));
        ninePushButton->setGeometry(QRect(280, 330, 91, 91));
        twoPushButton = new QPushButton(centralwidget);
        twoPushButton->setObjectName(QString::fromUtf8("twoPushButton"));
        twoPushButton->setGeometry(QRect(170, 100, 91, 91));
        sixPushButton = new QPushButton(centralwidget);
        sixPushButton->setObjectName(QString::fromUtf8("sixPushButton"));
        sixPushButton->setGeometry(QRect(290, 240, 91, 91));
        fivePushButton = new QPushButton(centralwidget);
        fivePushButton->setObjectName(QString::fromUtf8("fivePushButton"));
        fivePushButton->setGeometry(QRect(150, 220, 91, 91));
        onePushButton = new QPushButton(centralwidget);
        onePushButton->setObjectName(QString::fromUtf8("onePushButton"));
        onePushButton->setGeometry(QRect(30, 100, 91, 91));
        zeroPushButton = new QPushButton(centralwidget);
        zeroPushButton->setObjectName(QString::fromUtf8("zeroPushButton"));
        zeroPushButton->setGeometry(QRect(130, 450, 91, 91));
        threePushButton_11 = new QPushButton(centralwidget);
        threePushButton_11->setObjectName(QString::fromUtf8("threePushButton_11"));
        threePushButton_11->setGeometry(QRect(20, 450, 91, 91));
        threePushButton_12 = new QPushButton(centralwidget);
        threePushButton_12->setObjectName(QString::fromUtf8("threePushButton_12"));
        threePushButton_12->setGeometry(QRect(280, 450, 91, 91));
        dialerDisplay = new QLabel(centralwidget);
        dialerDisplay->setObjectName(QString::fromUtf8("dialerDisplay"));
        dialerDisplay->setGeometry(QRect(250, 40, 111, 16));
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(340, 30, 93, 28));
        Phonebook->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Phonebook);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        threePushButton->setText(QApplication::translate("Phonebook", "3", nullptr));
        fourPushButton->setText(QApplication::translate("Phonebook", "4", nullptr));
        eightPushButton->setText(QApplication::translate("Phonebook", "8", nullptr));
        sevenPushButton->setText(QApplication::translate("Phonebook", "7", nullptr));
        ninePushButton->setText(QApplication::translate("Phonebook", "9", nullptr));
        twoPushButton->setText(QApplication::translate("Phonebook", "2", nullptr));
        sixPushButton->setText(QApplication::translate("Phonebook", "6", nullptr));
        fivePushButton->setText(QApplication::translate("Phonebook", "5", nullptr));
        onePushButton->setText(QApplication::translate("Phonebook", "1", nullptr));
        zeroPushButton->setText(QApplication::translate("Phonebook", "0", nullptr));
        threePushButton_11->setText(QApplication::translate("Phonebook", "3", nullptr));
        threePushButton_12->setText(QApplication::translate("Phonebook", "3", nullptr));
        dialerDisplay->setText(QApplication::translate("Phonebook", "TextLabel", nullptr));
        deleteButton->setText(QApplication::translate("Phonebook", "X", nullptr));
        menuTools->setTitle(QApplication::translate("Phonebook", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Phonebook: public Ui_Phonebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONEBOOK_H
