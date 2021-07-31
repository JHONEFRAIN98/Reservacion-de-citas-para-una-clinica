#include "cprograma.h"

const QVector<CDoctor *> &CPrograma::getDoctores() const
{
    return doctores;
}

void CPrograma::setDoctores(const QVector<CDoctor *> &newDoctores)
{
    doctores = newDoctores;
}

const QVector<CPaciente *> &CPrograma::getPacientes() const
{
    return pacientes;
}

void CPrograma::setPacientes(const QVector<CPaciente *> &newPacientes)
{
    pacientes = newPacientes;
}

const QVector<CEspecialidad *> &CPrograma::getEspecialidades() const
{
    return especialidades;
}

void CPrograma::setEspecialidades(const QVector<CEspecialidad *> &newEspecialidades)
{
    especialidades = newEspecialidades;
}

const QVector<CCita *> &CPrograma::getCitas() const
{
    return citas;
}

void CPrograma::setCitas(const QVector<CCita *> &newCitas)
{
    citas = newCitas;
}

CPrograma::CPrograma()
{

}

CPrograma::CPrograma(const QVector<CDoctor *> &doctores, const QVector<CPaciente *> &pacientes, const QVector<CEspecialidad *> &especialidades, const QVector<CCita *> &citas) : doctores(doctores),
    pacientes(pacientes),
    especialidades(especialidades),
    citas(citas)
{}
