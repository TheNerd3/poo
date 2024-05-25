#include "boton.h"
#include <QPainter>

Boton::Boton(QWidget *parent, Boton::Color color)
    : QPushButton(parent)
{
    colorear(color);
}

void Boton::colorear(Boton::Color color)
{
    switch (color) {
    case Rojo:
        currentColor = QColor(255, 0, 0);
        break;
    case Rosa:
        currentColor = QColor(255, 105, 180);
        break;
    case Violeta:
        currentColor = QColor(138, 43, 226);
        break;
    case Azul:
        currentColor = QColor(0, 0, 255);
        break;
    case Verde:
        currentColor = QColor(0, 255, 0);
        break;
    case Magenta:
        currentColor = Qt::magenta;
        break;
    }

    this->setStyleSheet(QString("background-color: %1; color: white; border: none;")
                        .arg(currentColor.name()));
    this->update();
}

void Boton::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(this->rect(), currentColor);
    QPushButton::paintEvent(event);
}
