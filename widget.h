#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "cprograma.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
private:
    CPrograma *programa;
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_doctoresButton_clicked();

    void on_especialidadButton_clicked();

    void on_pacientesButton_clicked();

    void on_citasButton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
