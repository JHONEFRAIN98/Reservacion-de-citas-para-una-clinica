#include "doctorform.h"
#include "ui_doctorform.h"

DoctorForm::DoctorForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DoctorForm)
{
    ui->setupUi(this);
}

DoctorForm::DoctorForm(QWidget *parent, QVector<CDoctor *> &doctores) :
    QDialog(parent),
    ui(new Ui::DoctorForm)
{
    ui->setupUi(this);
    DoctorForm::doctores = doctores;
}

DoctorForm::~DoctorForm()
{
    delete ui;
}
