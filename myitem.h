#ifndef MYITEM_H
#define MYITEM_H

//#include <QObject>
#include <QPushButton>
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QDebug>

class MyItem : public QGraphicsItem
{
public:
    MyItem();
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
    //void addToLogs(QString message);

    void changeAngle(qreal dangle);
    qreal getAngle();
    int test;
    void doPublicCollision();

    //static int radius;

protected:
    void advance(int phase) override;

private:
    qreal angle, speed;
    int radius;
    void doCollision();
    void executeCollision(qreal x, qreal y);
    QPushButton button;
};

#endif // MYITEM_H
