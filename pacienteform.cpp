#include "pacienteform.h"
#include "ui_pacienteform.h"

PacienteForm::PacienteForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PacienteForm)
{
    ui->setupUi(this);
}

PacienteForm::~PacienteForm()
{
    delete ui;
}
