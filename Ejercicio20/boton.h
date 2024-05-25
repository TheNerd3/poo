#ifndef BOTON_H
#define BOTON_H

#include <QPushButton>
#include <QWidget>
#include <QColor>

class Boton : public QPushButton
{
    Q_OBJECT
public:
    enum Color { Rojo, Rosa, Violeta, Azul, Verde, Magenta };

    explicit Boton(QWidget *parent = nullptr, Color color = Azul);

    void colorear(Color color);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    QColor currentColor;
};

#endif // BOTON_H
