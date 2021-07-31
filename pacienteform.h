#ifndef PACIENTEFORM_H
#define PACIENTEFORM_H

#include <QDialog>

namespace Ui {
class PacienteForm;
}

class PacienteForm : public QDialog
{
    Q_OBJECT

public:
    explicit PacienteForm(QWidget *parent = nullptr);
    ~PacienteForm();

private:
    Ui::PacienteForm *ui;
};

#endif // PACIENTEFORM_H
