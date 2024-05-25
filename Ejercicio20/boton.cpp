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
        currentColor = QColor(255, 0, 0); // Rojo
        break;
    case Rosa:
        currentColor = QColor(255, 105, 180); // Rosa
        break;
    case Violeta:
        currentColor = QColor(138, 43, 226); // Violeta
        break;
    case Azul:
        currentColor = QColor(0, 0, 255); // Azul
        break;
    case Verde:
        currentColor = QColor(0, 255, 0); // Verde
        break;
    case Magenta:
        currentColor = Qt::magenta; // Magenta
        break;
    }

    // Aplicar el color de fondo y forzar la actualización
    this->setStyleSheet(QString("background-color: %1; color: white; border: none;")
                        .arg(currentColor.name()));
    this->update(); // Redibuja el botón para aplicar el nuevo color
}

void Boton::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(this->rect(), currentColor); // Dibuja el color de fondo
    QPushButton::paintEvent(event); // Llama al método de la clase base para dibujar el resto del botón
}
