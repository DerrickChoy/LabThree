#include "myaddressbookmodel.h"
#include <QFile>

MyAddressBookModel::MyAddressBookModel(QObject *parent):
    QAbstractTableModel(parent)
{

}

int MyAddressBookModel::rowCount(const QModelIndex &parent) const
{
    return 2; //update later
}

int MyAddressBookModel::columnCount(const QModelIndex &parent) const
{
    return 3; //update later
}

QVariant MyAddressBookModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole){
        return QString("Row%1, Column%2")
                .arg(index.row())
                .arg(index.column());
    }
    return QVariant();
}

void MyAddressBookModel::openFile(QString filePath)
{
    QFile file(filePath);
    //update starting here
}
