#include "pintura.h"
#include "ui_pintura.h"
#include <QPainter>
#include <QMouseEvent>
#include <QWheelEvent>
#include <QKeyEvent>

Pintura::Pintura(QWidget *parent)
    : QWidget(parent),ui(new Ui::Pintura), penColor(Qt::black), penWidth(2)
{
    ui->setupUi(this);
    setMouseTracking(true);
    setWindowTitle("Pintura");
    resize(600, 400);
}

Pintura::~Pintura()
{
    delete ui;
}

void Pintura::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setPen(QPen(penColor, penWidth, Qt::SolidLine));
    for (int i = 1; i < path.size(); ++i) {
        painter.drawLine(path[i - 1], path[i]);
    }
}

void Pintura::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        path.append(event->pos());
        update();
    }
}

void Pintura::mouseMoveEvent(QMouseEvent *event) {
    if (event->buttons() & Qt::LeftButton) {
        path.append(event->pos());
        update();
    }
}

void Pintura::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_R)
        penColor = Qt::red;
    else if (event->key() == Qt::Key_G)
        penColor = Qt::green;
    else if (event->key() == Qt::Key_B)
        penColor = Qt::blue;
    else if (event->key() == Qt::Key_Escape) {
        path.clear();
        update();
    }
}

void Pintura::wheelEvent(QWheelEvent *event) {
    int delta = event->angleDelta().y();
    if (delta > 0)
        penWidth += 1;
    else if (delta < 0 && penWidth > 1)
        penWidth -= 1;
}
