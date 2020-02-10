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
