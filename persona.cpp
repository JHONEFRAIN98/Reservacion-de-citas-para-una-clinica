#include "persona.h"
#include "ui_persona.h"

Persona::Persona(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Persona)
{
    ui->setupUi(this);
}

Persona::~Persona()
{
    delete ui;
}
