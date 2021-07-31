#ifndef CITAFORM_H
#define CITAFORM_H
#include <QDialog>
#include "ccita.h"

namespace Ui {
class CitaForm;
}

class CitaForm : public QDialog
{
    QVector<CCita*> citas;
    Q_OBJECT


public:
    explicit CitaForm(QWidget *parent = nullptr);
    CitaForm(QWidget *parent, QVector<CCita*> &citas);
    ~CitaForm();

private:
    Ui::CitaForm *ui;
};

#endif // CITAFORM_H
