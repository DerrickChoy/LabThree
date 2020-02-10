#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <QMainWindow>
#include "myaddressbookmodel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Phonebook; }
QT_END_NAMESPACE

class Phonebook : public QMainWindow
{
    Q_OBJECT

public:
    Phonebook(QWidget *parent = nullptr);
    ~Phonebook();

private slots:

    void on_actionAdd_an_Address_Book_triggered();

private:
    Ui::Phonebook *ui;
    MyAddressBookModel *myModel;
};
#endif // PHONEBOOK_H
