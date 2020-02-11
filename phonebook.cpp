#include "phonebook.h"
#include "ui_phonebook.h"

#include <QFileDialog>
#include <iostream>

Phonebook::Phonebook(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::Phonebook),
    myModel(new MyAddressBookModel(this))
{
    ui->setupUi(this);
    ui->tableView->setModel(myModel);
}

Phonebook::~Phonebook()
{
    delete ui;
}

void Phonebook::on_actionAdd_an_Address_Book_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open Address Book"), "",
        tr("Address Book (*.csv);;All Files (*)"));
    std::cout << fileName.toStdString() << std::endl;
    myModel->openFile(fileName);
}

void Phonebook::on_tableView_clicked(const QModelIndex &index)
{
    ui->displayLabel->setText(myModel->getPhoneNumber(index.row()));
}


void Phonebook::on_onePushButton_clicked()
{
    myModel->setNumberInput("1");
    ui->dialerDisplay->setText(myModel->getDialerNumber());
}

void Phonebook::on_twoPushButton_clicked()
{
    myModel->setNumberInput("2");
    ui->dialerDisplay->setText(myModel->getDialerNumber());
}

void Phonebook::on_threePushButton_clicked()
{
    myModel->setNumberInput("3");
    ui->dialerDisplay->setText(myModel->getDialerNumber());
}

void Phonebook::on_fourPushButton_clicked()
{
    myModel->setNumberInput("4");
    ui->dialerDisplay->setText(myModel->getDialerNumber());
}

void Phonebook::on_fivePushButton_clicked()
{
    myModel->setNumberInput("5");
    ui->dialerDisplay->setText(myModel->getDialerNumber());
}

void Phonebook::on_sixPushButton_clicked()
{
    myModel->setNumberInput("6");
    ui->dialerDisplay->setText(myModel->getDialerNumber());
}
void Phonebook::on_sevenPushButton_clicked()
{
    myModel->setNumberInput("7");
    ui->dialerDisplay->setText(myModel->getDialerNumber());
}

void Phonebook::on_eightPushButton_clicked()
{
    myModel->setNumberInput("8");
    ui->dialerDisplay->setText(myModel->getDialerNumber());
}

void Phonebook::on_ninePushButton_clicked()
{
    myModel->setNumberInput("9");
    ui->dialerDisplay->setText(myModel->getDialerNumber());
}

void Phonebook::on_zeroPushButton_clicked()
{
    myModel->setNumberInput("0");
    ui->dialerDisplay->setText(myModel->getDialerNumber());
}

void Phonebook::on_deleteButton_clicked()
{
    myModel->deleteNumber();
    ui->dialerDisplay->setText(myModel->getDialerNumber());
}
