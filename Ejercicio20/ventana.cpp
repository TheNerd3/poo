#include "ventana.h"
#include "ui_ventana.h"
#include "boton.h"
#include <QPainter>
#include <QImage>

Ventana::Ventana(QWidget *parent)
    : QWidget(parent), ui(new Ui::Ventana)
{
    ui->setupUi(this);

    // Configurar los colores de los botones promocionados
    ui->bt1->colorear(Boton::Rojo);
    ui->bt2->colorear(Boton::Rosa);
    ui->bt3->colorear(Boton::Violeta);
    ui->bt4->colorear(Boton::Azul);
    ui->bt5->colorear(Boton::Verde);

    // Ajustar el tamaño de los botones para que sean más largos y pegados
    ui->bt1->setMinimumHeight(60);
    ui->bt2->setMinimumHeight(60);
    ui->bt3->setMinimumHeight(60);
    ui->bt4->setMinimumHeight(60);
    ui->bt5->setMinimumHeight(60);
}

void Ventana::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QImage background("C:/Users/checa/Desktop/BLSP/Tercer Año/POO/Ejercicio20/botones.png"); // Ajusta la ruta de la imagen según sea necesario
    painter.drawImage(rect(), background);
}

Ventana::~Ventana()
{
    delete ui;
}
