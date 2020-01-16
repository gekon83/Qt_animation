#ifndef MYITEM_H
#define MYITEM_H

#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsItem>

class MyItem : public QGraphicsItem
{
public:
    MyItem();
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

protected:
    void advance(int phase) override;

private:
    qreal angle, speed;
    void doCollision();
};

#endif // MYITEM_H
