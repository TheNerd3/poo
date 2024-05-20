#include "acceso.h"
#include "ui_acceso.h"
#include "ventana.h"
#include <QDebug>
#include <QNetworkAccessManager>
#include <QPainter>
#include <QPaintEvent>
#include <QNetworkReply>
acceso::acceso(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::acceso),
      intentosfallidos(0)
{
    setMaximumSize(400, 200); // Establecer el tamaño máximo del widget
    setMinimumSize(200, 100); // Establecer el tamaño mínimo del widget

    ui->setupUi(this);
    ui->leUusuario->setFocus();
    connect(ui->pushButton,SIGNAL (pressed()), this, SLOT(slots_validar()) );
    connect(ui->leclave, SIGNAL(returnPressed()),SLOT(slots_validar()) );

    ui->leclave->setEchoMode(QLineEdit::Password);

    // Cargar la imagen de fondo desde la URL
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(imageDownloaded(QNetworkReply*)));
    manager->get(QNetworkRequest(QUrl("https://i.pinimg.com/736x/25/98/2c/25982c2af2cca84c831a37dedfd15c66.jpg")));
}

acceso::~acceso()
{
    delete ui;
}
void acceso::slots_validar()
{
    if ( ui->leUusuario->text() ==  "admin"  && ui-> leclave->text() == "1234" || ui->leUusuario->text() ==  "user"  && ui-> leclave->text() == "4321"){
        qDebug() << "Usuario Valido";
        this->hide();
        if (ui->leUusuario->text() ==  "admin"){
            Ventana = new ventana("admin");
            Ventana->show();
        }
        else{
            Ventana = new ventana("user");
            Ventana->show();
        }

    }
    else{
        qDebug() << "Usuario no Valido";
        intentosfallidos++;
        if(intentosfallidos>=3){
            qDebug()<<"se paso el limite permitido";
            qApp->quit();//quit() cierra aplicacion
        }

    }
}
void acceso::imageDownloaded(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray imageData = reply->readAll();
        backgroundImage.loadFromData(imageData);

        // Redibujar el widget para mostrar la imagen de fondo
        update();
    }
    else
    {
        qDebug() << "Error al descargar la imagen:" << reply->errorString();
    }
    reply->deleteLater();
}

void acceso::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    // Dibujar la imagen de fondo escalada al tamaño del widget
    if (!backgroundImage.isNull())
        painter.drawImage(0, 0, backgroundImage.scaled(this->size()));
}

