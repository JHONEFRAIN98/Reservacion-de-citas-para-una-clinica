#include "cpersona.h"

const QString &CPersona::getNombre() const
{
    return nombre;
}

void CPersona::setNombre(const QString &newNombre)
{
    nombre = newNombre;
}

const QString &CPersona::getApellido_paterno() const
{
    return apellido_paterno;
}

void CPersona::setApellido_paterno(const QString &newApellido_paterno)
{
    apellido_paterno = newApellido_paterno;
}

const QString &CPersona::getApellido_materno() const
{
    return apellido_materno;
}

void CPersona::setApellido_materno(const QString &newApellido_materno)
{
    apellido_materno = newApellido_materno;
}

const QString &CPersona::getDocumento() const
{
    return documento;
}

void CPersona::setDocumento(const QString &newDocumento)
{
    documento = newDocumento;
}

const QString &CPersona::getSexo() const
{
    return sexo;
}

void CPersona::setSexo(const QString &newSexo)
{
    sexo = newSexo;
}

int CPersona::getEdad() const
{
    return edad;
}

void CPersona::setEdad(int newEdad)
{
    edad = newEdad;
}

CPersona::CPersona()
{

}

CPersona::CPersona(const QString &nombre, const QString &apellido_paterno, const QString &apellido_materno, const QString &documento, const QString &sexo, int edad) : nombre(nombre),
    apellido_paterno(apellido_paterno),
    apellido_materno(apellido_materno),
    documento(documento),
    sexo(sexo),
    edad(edad)
{}
