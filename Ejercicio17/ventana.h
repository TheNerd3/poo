#ifndef VENTANA_H
#define VENTANA_H

#include <QWidget>
#include <QLabel>

class ventana : public QWidget
{
    Q_OBJECT
public:
    explicit ventana(const QString &usuario, QWidget *parent = nullptr);

private:
    QLabel *label;
};

#endif // VENTANA_H
