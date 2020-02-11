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

    void on_threePushButton_clicked();

    void on_onePushButton_clicked();

    void on_twoPushButton_clicked();

    void on_fourPushButton_clicked();

    void on_fivePushButton_clicked();

    void on_sixPushButton_clicked();

    void on_sevenPushButton_clicked();

    void on_eightPushButton_clicked();

    void on_ninePushButton_clicked();

    void on_zeroPushButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::Phonebook *ui;
    MyAddressBookModel *myModel;
};
#endif // PHONEBOOK_H
