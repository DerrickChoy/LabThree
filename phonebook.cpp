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
    ui->dialerDisplayBox->setText(myModel->getPhoneNumber(index.row()));
}

void Phonebook::on_btnNum1_clicked()
{
    myModel->setNumberInput("1");
    ui->dialerDisplayBox->setText(myModel->getDialerNumber());
}

void Phonebook::on_btnNum2_clicked()
{
    myModel->setNumberInput("2");
    ui->dialerDisplayBox->setText(myModel->getDialerNumber());
}

void Phonebook::on_btnNum3_clicked()
{
    myModel->setNumberInput("3");
    ui->dialerDisplayBox->setText(myModel->getDialerNumber());
}

void Phonebook::on_btnNum4_clicked()
{
    myModel->setNumberInput("4");
    ui->dialerDisplayBox->setText(myModel->getDialerNumber());
}

void Phonebook::on_btnNum5_clicked()
{
    myModel->setNumberInput("5");
    ui->dialerDisplayBox->setText(myModel->getDialerNumber());
}

void Phonebook::on_btnNum6_clicked()
{
    myModel->setNumberInput("6");
    ui->dialerDisplayBox->setText(myModel->getDialerNumber());
}

void Phonebook::on_btnNum7_clicked()
{
    myModel->setNumberInput("7");
    ui->dialerDisplayBox->setText(myModel->getDialerNumber());
}

void Phonebook::on_btnNum8_clicked()
{
    myModel->setNumberInput("8");
    ui->dialerDisplayBox->setText(myModel->getDialerNumber());
}

void Phonebook::on_btnNum9_clicked()
{
    myModel->setNumberInput("9");
    ui->dialerDisplayBox->setText(myModel->getDialerNumber());
}

void Phonebook::on_btnNum0_clicked()
{
    myModel->setNumberInput("0");
    ui->dialerDisplayBox->setText(myModel->getDialerNumber());
}

void Phonebook::on_deletePushButton_clicked()
{
    myModel->deleteNumber();
    ui->dialerDisplayBox->setText(myModel->getDialerNumber());
}
