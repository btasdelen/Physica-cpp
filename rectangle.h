#ifndef RECTANGLE
#define RECTANGLE

#include <QGraphicsRectItem>

class MyRect: public QGraphicsRectItem {
public:
    void keyPressEvent(QKeyEvent *event);
};

#endif // RECTANGLE

