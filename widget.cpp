#include "widget.h"
#include "ui_widget.h"
#include "doctorform.h"
#include "especialidadform.h"
#include "pacienteform.h"
#include "citaform.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Sistema de Clinica - UTEC");
    programa = new CPrograma();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_doctoresButton_clicked()
{
    DoctorForm doctorform(this);
    doctorform.exec();
}


void Widget::on_especialidadButton_clicked()
{
    QVector<CEspecialidad *> especialidades = programa->getEspecialidades();
    EspecialidadForm especialidadform(this, especialidades);
    int resultado;
    resultado = especialidadform.exec();
    QVector<CEspecialidad*> nuevas_especialidades = especialidadform.getEspecialidadesvector();
    programa->setEspecialidades(nuevas_especialidades);
}


void Widget::on_pacientesButton_clicked()
{
    PacienteForm pacienteform(this);
    pacienteform.exec();
}


void Widget::on_citasButton_clicked()
{
    CitaForm citaform(this);
    citaform.exec();
}

