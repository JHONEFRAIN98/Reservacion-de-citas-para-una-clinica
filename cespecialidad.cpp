#include "cespecialidad.h"

const QString &CEspecialidad::getNombre() const
{
    return nombre;
}

void CEspecialidad::setNombre(const QString &newNombre)
{
    nombre = newNombre;
}

const QString &CEspecialidad::getDescripcion() const
{
    return descripcion;
}

void CEspecialidad::setDescripcion(const QString &newDescripcion)
{
    descripcion = newDescripcion;
}

CEspecialidad::CEspecialidad()
{

}

CEspecialidad::CEspecialidad(const QString &nombre, const QString &descripcion) : nombre(nombre),
    descripcion(descripcion)
{}
