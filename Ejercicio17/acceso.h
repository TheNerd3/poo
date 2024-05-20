#ifndef ACCESO_H
#define ACCESO_H

#include <QWidget>
#include <ventana.h>
#include <QNetworkReply>
QT_BEGIN_NAMESPACE
namespace Ui { class acceso; }
QT_END_NAMESPACE

class acceso : public QWidget
{
    Q_OBJECT

public:
    acceso(QWidget *parent = nullptr);
    ~acceso();

private:
    Ui::acceso *ui;
    ventana *Ventana;
        QImage backgroundImage;
     int intentosfallidos;
private slots:
    void slots_validar();
     void imageDownloaded(QNetworkReply *reply);
protected:
     void paintEvent(QPaintEvent *event) override;
};
#endif // ACCESO_H
