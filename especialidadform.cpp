#include "especialidadform.h"
#include "ui_especialidadform.h"
#include "QCoreApplication"
EspecialidadForm::EspecialidadForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EspecialidadForm)
{
    ui->setupUi(this);
}

EspecialidadForm::EspecialidadForm(QWidget *parent, QVector<CEspecialidad *> &especialidades):
    QDialog(parent),
    ui(new Ui::EspecialidadForm)
{
    ui->setupUi(this);
    QStringList titulos;
    titulos << "NOmbre" << "descripcion";
    EspecialidadForm::especialidades = especialidades;
    qDebug() << especialidades.count();
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setHorizontalHeaderLabels(titulos);
    for(auto &especialidad : EspecialidadForm::especialidades){
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, nombre, new QTableWidgetItem(especialidad->getNombre()));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, descripcion, new QTableWidgetItem(especialidad->getDescripcion()));
    }
}

EspecialidadForm::~EspecialidadForm()
{
    delete ui;
}

QVector<CEspecialidad*> EspecialidadForm::getEspecialidadesvector()
{
    return especialidades;
}

void EspecialidadForm::on_pushButton_clicked()
{
    QString nombre = ui->nombre_edit->text();
    QString descripcion = ui->descripcion_edit->toPlainText();
    if(nombre.isEmpty()){
        return;
    }
    auto especialidad = new CEspecialidad(nombre, descripcion);
    especialidades << especialidad;
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, EspecialidadForm::nombre, new QTableWidgetItem(especialidad->getNombre()));
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, EspecialidadForm::descripcion, new QTableWidgetItem(especialidad->getDescripcion()));
}

