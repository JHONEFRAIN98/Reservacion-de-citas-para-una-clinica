#include "citaform.h"
#include "ui_citaform.h"

CitaForm::CitaForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CitaForm)
{
    ui->setupUi(this);
}

CitaForm::CitaForm(QWidget *parent, QVector<CCita *> &citas):
    QDialog(parent),
    ui(new Ui::CitaForm)
{
    ui->setupUi(this);
    CitaForm::citas = citas;
}

CitaForm::~CitaForm()
{
    delete ui;
}
