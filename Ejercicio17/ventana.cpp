// ventana.cpp
#include "ventana.h"
#include <QVBoxLayout>

ventana::ventana(const QString &usuario, QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    label = new QLabel(this);
    label->setAlignment(Qt::AlignCenter);

    if (usuario == "admin") {
        label->setText("Hola admin");
    } else {
        label->setText("Hola user");
    }

    layout->addWidget(label);
}
