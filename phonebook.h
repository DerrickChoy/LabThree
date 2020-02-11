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

    void on_tableView_clicked(const QModelIndex &index);


    void on_btnNum1_clicked();

    void on_btnNum2_clicked();

    void on_btnNum3_clicked();

    void on_btnNum4_clicked();

    void on_btnNum5_clicked();

    void on_btnNum6_clicked();

    void on_btnNum7_clicked();

    void on_btnNum8_clicked();

    void on_btnNum9_clicked();

    void on_btnNum0_clicked();

    void on_deletePushButton_clicked();

    void on_btnCall_clicked();

private:
    Ui::Phonebook *ui;
    MyAddressBookModel *myModel;
};
#endif // PHONEBOOK_H
