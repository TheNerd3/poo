#ifndef PINTURA_H
#define PINTURA_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Pintura; }
QT_END_NAMESPACE

class Pintura : public QWidget
{
    Q_OBJECT

public:
    Pintura(QWidget *parent = nullptr);
    ~Pintura();
    int Color= 0;

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;

private:
    Ui::Pintura *ui;

    QList<QPoint> path;
    QList<QPoint> pathR;
    QList<QPoint> pathG;
    QList<QPoint> pathB;
    QColor penColor;
    int penWidth;


};
#endif // PINTURA_H



