#include <QApplication>
#include <QGraphicsScene>
#include "rectangle.h"
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QGraphicsScene *scene = new QGraphicsScene();

    MyRect *rect = new MyRect();

    rect->setFlag(QGraphicsItem::ItemIsFocusable);

    rect->setFocus();

    rect->setRect(0, 0, 100, 100);

    scene->addItem(rect);

    QGraphicsView *view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->setFixedSize(800, 600);

    scene->setSceneRect(0, 0, 800, 600);

    rect->setPos(view->width()/2, view->height()-scene->height()/2);

    view->show();

    return app.exec();
}
