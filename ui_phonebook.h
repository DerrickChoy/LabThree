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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
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
    QLabel *dialerDisplayBox;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QPushButton *btnNum1;
    QPushButton *btnNum2;
    QPushButton *btnNum3;
    QPushButton *btnNum4;
    QPushButton *btnNum6;
    QPushButton *btnNum5;
    QPushButton *btnNum7;
    QPushButton *btnNum9;
    QPushButton *btnNum8;
    QPushButton *btnCall;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *btnNum0;
    QPushButton *btnNumPound;
    QPushButton *btnNumStar;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *deletePushButton;
    QMenuBar *menubar;
    QMenu *menuTools;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Phonebook)
    {
        if (Phonebook->objectName().isEmpty())
            Phonebook->setObjectName(QString::fromUtf8("Phonebook"));
        Phonebook->resize(800, 600);
        Phonebook->setAutoFillBackground(false);
        actionAdd_an_Address_Book = new QAction(Phonebook);
        actionAdd_an_Address_Book->setObjectName(QString::fromUtf8("actionAdd_an_Address_Book"));
        actionExit = new QAction(Phonebook);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(Phonebook);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(410, 20, 361, 511));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"color: rgb(255, 255, 255);"));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
        dialerDisplayBox = new QLabel(centralwidget);
        dialerDisplayBox->setObjectName(QString::fromUtf8("dialerDisplayBox"));
        dialerDisplayBox->setGeometry(QRect(40, 90, 311, 41));
        QFont font;
        font.setPointSize(30);
        dialerDisplayBox->setFont(font);
        dialerDisplayBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        dialerDisplayBox->setAlignment(Qt::AlignCenter);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 0, 391, 551));
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);"));
        line->setLineWidth(25);
        line->setMidLineWidth(-2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(30, 50, 340, 101));
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        line_2->setLineWidth(25);
        line_2->setMidLineWidth(-2);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(390, 0, 411, 551));
        line_3->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);"));
        line_3->setLineWidth(25);
        line_3->setMidLineWidth(-2);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        btnNum1 = new QPushButton(centralwidget);
        btnNum1->setObjectName(QString::fromUtf8("btnNum1"));
        btnNum1->setGeometry(QRect(80, 160, 81, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lato"));
        font1.setPointSize(30);
        btnNum1->setFont(font1);
        btnNum1->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);"));
        btnNum1->setFlat(false);
        btnNum2 = new QPushButton(centralwidget);
        btnNum2->setObjectName(QString::fromUtf8("btnNum2"));
        btnNum2->setGeometry(QRect(160, 160, 81, 81));
        btnNum2->setFont(font1);
        btnNum2->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);"));
        btnNum2->setFlat(false);
        btnNum3 = new QPushButton(centralwidget);
        btnNum3->setObjectName(QString::fromUtf8("btnNum3"));
        btnNum3->setGeometry(QRect(240, 160, 81, 81));
        btnNum3->setFont(font1);
        btnNum3->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);"));
        btnNum3->setAutoDefault(false);
        btnNum3->setFlat(false);
        btnNum4 = new QPushButton(centralwidget);
        btnNum4->setObjectName(QString::fromUtf8("btnNum4"));
        btnNum4->setGeometry(QRect(80, 240, 81, 81));
        btnNum4->setFont(font1);
        btnNum4->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);"));
        btnNum4->setFlat(false);
        btnNum6 = new QPushButton(centralwidget);
        btnNum6->setObjectName(QString::fromUtf8("btnNum6"));
        btnNum6->setGeometry(QRect(240, 240, 81, 81));
        btnNum6->setFont(font1);
        btnNum6->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);"));
        btnNum6->setAutoDefault(false);
        btnNum6->setFlat(false);
        btnNum5 = new QPushButton(centralwidget);
        btnNum5->setObjectName(QString::fromUtf8("btnNum5"));
        btnNum5->setGeometry(QRect(160, 240, 81, 81));
        btnNum5->setFont(font1);
        btnNum5->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);"));
        btnNum5->setFlat(false);
        btnNum7 = new QPushButton(centralwidget);
        btnNum7->setObjectName(QString::fromUtf8("btnNum7"));
        btnNum7->setGeometry(QRect(80, 320, 81, 81));
        btnNum7->setFont(font1);
        btnNum7->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);"));
        btnNum7->setFlat(false);
        btnNum9 = new QPushButton(centralwidget);
        btnNum9->setObjectName(QString::fromUtf8("btnNum9"));
        btnNum9->setGeometry(QRect(240, 320, 81, 81));
        btnNum9->setFont(font1);
        btnNum9->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);"));
        btnNum9->setAutoDefault(false);
        btnNum9->setFlat(false);
        btnNum8 = new QPushButton(centralwidget);
        btnNum8->setObjectName(QString::fromUtf8("btnNum8"));
        btnNum8->setGeometry(QRect(160, 320, 81, 81));
        btnNum8->setFont(font1);
        btnNum8->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);"));
        btnNum8->setFlat(false);
        btnCall = new QPushButton(centralwidget);
        btnCall->setObjectName(QString::fromUtf8("btnCall"));
        btnCall->setGeometry(QRect(80, 490, 121, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Lato"));
        font2.setPointSize(20);
        btnCall->setFont(font2);
        btnCall->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 220, 47, 14));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Lato"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color: rgb(176, 176, 176);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 220, 47, 14));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(176, 176, 176);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 300, 47, 14));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(176, 176, 176);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 300, 47, 14));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(176, 176, 176);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(260, 300, 47, 14));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(176, 176, 176);"));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 380, 47, 14));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(176, 176, 176);"));
        label_6->setAlignment(Qt::AlignCenter);
        btnNum0 = new QPushButton(centralwidget);
        btnNum0->setObjectName(QString::fromUtf8("btnNum0"));
        btnNum0->setGeometry(QRect(160, 400, 81, 81));
        btnNum0->setFont(font1);
        btnNum0->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);"));
        btnNum0->setFlat(false);
        btnNumPound = new QPushButton(centralwidget);
        btnNumPound->setObjectName(QString::fromUtf8("btnNumPound"));
        btnNumPound->setGeometry(QRect(240, 400, 81, 81));
        btnNumPound->setFont(font1);
        btnNumPound->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);"));
        btnNumPound->setAutoDefault(false);
        btnNumPound->setFlat(false);
        btnNumStar = new QPushButton(centralwidget);
        btnNumStar->setObjectName(QString::fromUtf8("btnNumStar"));
        btnNumStar->setGeometry(QRect(80, 400, 81, 81));
        btnNumStar->setFont(font1);
        btnNumStar->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);"));
        btnNumStar->setFlat(false);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(180, 380, 47, 14));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(176, 176, 176);"));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(260, 380, 47, 14));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(176, 176, 176);"));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(180, 460, 45, 14));
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(176, 176, 176);"));
        label_9->setAlignment(Qt::AlignCenter);
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(260, 210, 160, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        deletePushButton = new QPushButton(centralwidget);
        deletePushButton->setObjectName(QString::fromUtf8("deletePushButton"));
        deletePushButton->setGeometry(QRect(200, 490, 121, 41));
        deletePushButton->setFont(font2);
        deletePushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);"));
        deletePushButton->setFlat(false);
        Phonebook->setCentralWidget(centralwidget);
        formLayoutWidget->raise();
        line_3->raise();
        line->raise();
        line_2->raise();
        dialerDisplayBox->raise();
        tableView->raise();
        btnNum1->raise();
        btnNum2->raise();
        btnNum3->raise();
        btnNum4->raise();
        btnNum6->raise();
        btnNum5->raise();
        btnNum7->raise();
        btnNum9->raise();
        btnNum8->raise();
        btnCall->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        btnNum0->raise();
        btnNumPound->raise();
        btnNumStar->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        deletePushButton->raise();
        menubar = new QMenuBar(Phonebook);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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

        btnNum3->setDefault(false);
        btnNum6->setDefault(false);
        btnNum9->setDefault(false);
        btnNumPound->setDefault(false);


        QMetaObject::connectSlotsByName(Phonebook);
    } // setupUi

    void retranslateUi(QMainWindow *Phonebook)
    {
        Phonebook->setWindowTitle(QApplication::translate("Phonebook", "Phonebook", nullptr));
        actionAdd_an_Address_Book->setText(QApplication::translate("Phonebook", "Add an Address Book...", nullptr));
        actionExit->setText(QApplication::translate("Phonebook", "Exit", nullptr));
        dialerDisplayBox->setText(QApplication::translate("Phonebook", "XXX-XXX-XXXX", nullptr));
        btnNum1->setText(QApplication::translate("Phonebook", "1", nullptr));
        btnNum2->setText(QApplication::translate("Phonebook", "2", nullptr));
        btnNum3->setText(QApplication::translate("Phonebook", "3", nullptr));
        btnNum4->setText(QApplication::translate("Phonebook", "4", nullptr));
        btnNum6->setText(QApplication::translate("Phonebook", "6", nullptr));
        btnNum5->setText(QApplication::translate("Phonebook", "5", nullptr));
        btnNum7->setText(QApplication::translate("Phonebook", "7", nullptr));
        btnNum9->setText(QApplication::translate("Phonebook", "9", nullptr));
        btnNum8->setText(QApplication::translate("Phonebook", "8", nullptr));
        btnCall->setText(QApplication::translate("Phonebook", "CALL", nullptr));
        label->setText(QApplication::translate("Phonebook", "ABC", nullptr));
        label_2->setText(QApplication::translate("Phonebook", "DEF", nullptr));
        label_3->setText(QApplication::translate("Phonebook", "GHI", nullptr));
        label_4->setText(QApplication::translate("Phonebook", "JKL", nullptr));
        label_5->setText(QApplication::translate("Phonebook", "MNO", nullptr));
        label_6->setText(QApplication::translate("Phonebook", "PQRS", nullptr));
        btnNum0->setText(QApplication::translate("Phonebook", "0", nullptr));
        btnNumPound->setText(QApplication::translate("Phonebook", "#", nullptr));
        btnNumStar->setText(QApplication::translate("Phonebook", "*", nullptr));
        label_7->setText(QApplication::translate("Phonebook", "TUV", nullptr));
        label_8->setText(QApplication::translate("Phonebook", "WXYZ", nullptr));
        label_9->setText(QApplication::translate("Phonebook", "+", nullptr));
        deletePushButton->setText(QApplication::translate("Phonebook", "DELETE", nullptr));
        menuTools->setTitle(QApplication::translate("Phonebook", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Phonebook: public Ui_Phonebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONEBOOK_H
