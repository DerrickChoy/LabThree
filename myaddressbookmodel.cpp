#include "myaddressbookmodel.h"

#include <QFile>
#include <QMessageBox>
#include <QTextStream>

MyAddressBookModel::MyAddressBookModel(QObject *parent):
    QAbstractTableModel(parent)
{
    numberInput.resize(0);
}

int MyAddressBookModel::rowCount(const QModelIndex &parent) const
{
    return filteredIndex.size(); //update later
}

int MyAddressBookModel::columnCount(const QModelIndex &parent) const
{
    return 3; //update later
}

QVariant MyAddressBookModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole){
        switch (index.column()) {
        case 0:
            return firstNames.at(filteredIndex[index.row()]);
        case 1:
            return lastNames.at(filteredIndex[index.row()]);
        case 2:
            return phoneNumbers.at(filteredIndex[index.row()]);
        }
    }
    return QVariant();
}

void MyAddressBookModel::openFile(QString filePath)
{
    QFile file(filePath);
    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(0, "error", file.errorString());
        return;
    }
    QTextStream in(&file);
    lastNames.clear();
    firstNames.clear();
    phoneNumbers.clear();
    int j = 0;
    for(int i = 0; !in.atEnd(); i++){
        QString line = in.readLine();
        QStringList fields = line.split(",");
        if(i == 0) continue;
        firstNames.push_back(fields[0]);
        lastNames.push_back(fields[1]);
        phoneNumbers.push_back(fields[7]);
        filteredIndex.push_back(j++);
    }
    file.close();
    emit layoutChanged();
}

QString MyAddressBookModel::getPhoneNumber(int index)
{
    return phoneNumbers.at(filteredIndex[index]);
}

void MyAddressBookModel::setFilerString(QString fStr)
{
    filteredIndex.clear();
    for(int i=0;i<phoneNumbers.size();i++){
        if(phoneNumbers[i].startsWith(fStr))
            filteredIndex.push_back(i);
    }
    emit layoutChanged();
}

void MyAddressBookModel::setNumberInput(QString input)
{
    numberInput += input;
    if (numberInput.size()>=3&&numberInput[3]!="-")
        numberInput.insert(3,"-");
    if (numberInput.size()>=7&&numberInput[7]!="-")
        numberInput.insert(7,"-");
    setFilerString(numberInput);
}

void MyAddressBookModel::deleteNumber()
{
    numberInput.chop(1);
    setFilerString(numberInput);
}

QString MyAddressBookModel::getDialerNumber()
{
    return numberInput;
}

