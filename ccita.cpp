#include "ccita.h"

CDoctor *CCita::getDoctor() const
{
    return doctor;
}

void CCita::setDoctor(CDoctor *newDoctor)
{
    doctor = newDoctor;
}

CPaciente *CCita::getPaciente() const
{
    return paciente;
}

void CCita::setPaciente(CPaciente *newPaciente)
{
    paciente = newPaciente;
}

const QString &CCita::getFecha_str() const
{
    return fecha_str;
}

void CCita::setFecha_str(const QString &newFecha_str)
{
    fecha_str = newFecha_str;
}

QDateTime *CCita::getFecha() const
{
    return fecha;
}

void CCita::setFecha(QDateTime *newFecha)
{
    fecha = newFecha;
}

double CCita::getPrecio() const
{
    return precio;
}

void CCita::setPrecio(double newPrecio)
{
    precio = newPrecio;
}

CCita::CCita()
{

}

CCita::CCita(CDoctor *doctor, CPaciente *paciente, const QString &fecha_str, QDateTime *fecha, double precio) : doctor(doctor),
    paciente(paciente),
    fecha_str(fecha_str),
    fecha(fecha),
    precio(precio)
{}
