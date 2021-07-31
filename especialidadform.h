#ifndef ESPECIALIDADFORM_H
#define ESPECIALIDADFORM_H

#include <QDialog>
#include "cespecialidad.h"
namespace Ui {
class EspecialidadForm;
}

class EspecialidadForm : public QDialog
{
    Q_OBJECT
    QVector<CEspecialidad *>especialidades;

public:
    explicit EspecialidadForm(QWidget *parent = nullptr);
    EspecialidadForm(QWidget * parent, QVector<CEspecialidad*> &especialidades);
    ~EspecialidadForm();
    QVector<CEspecialidad*> getEspecialidadesvector();

private slots:
    void on_pushButton_clicked();

private:
    Ui::EspecialidadForm *ui;
    enum Colunma{
        nombre, descripcion
    };
};

#endif // ESPECIALIDADFORM_H
