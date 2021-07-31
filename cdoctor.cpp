#include "cdoctor.h"

CEspecialidad *CDoctor::getEspecialidad() const
{
    return especialidad;
}

void CDoctor::setEspecialidad(CEspecialidad *newEspecialidad)
{
    especialidad = newEspecialidad;
}

double CDoctor::getSalario() const
{
    return salario;
}

void CDoctor::setSalario(double newSalario)
{
    salario = newSalario;
}

CDoctor::CDoctor()
{

}

CDoctor::CDoctor(CEspecialidad *especialidad, double salario) : especialidad(especialidad),
    salario(salario)
{}
