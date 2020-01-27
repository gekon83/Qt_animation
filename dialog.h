#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QGraphicsScene>
#include <QTimer>

#include "myitem.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void addToLogs(QString message);

private slots:
    void on_pushButton_rotP_clicked();

    void on_pushButton_rotN_clicked();

private:
    Ui::Dialog *ui;
    QGraphicsScene *scene;
    QTimer *timer;
    MyItem *item;
    MyItem *dupa;
};
#endif // DIALOG_H
