#ifndef CPROGRAMA_H
#define CPROGRAMA_H
#include "cdoctor.h"
#include "cpaciente.h"
#include "ccita.h"
#include "cespecialidad.h"

class CPrograma
{
protected:
    QVector<CDoctor*> doctores;
    QVector<CPaciente*> pacientes;
    QVector<CEspecialidad*> especialidades;
    QVector<CCita*> citas;
public:
    CPrograma();
    CPrograma(const QVector<CDoctor *> &doctores, const QVector<CPaciente *> &pacientes, const QVector<CEspecialidad *> &especialidades, const QVector<CCita *> &citas);

    const QVector<CDoctor *> &getDoctores() const;
    void setDoctores(const QVector<CDoctor *> &newDoctores);
    const QVector<CPaciente *> &getPacientes() const;
    void setPacientes(const QVector<CPaciente *> &newPacientes);
    const QVector<CEspecialidad *> &getEspecialidades() const;
    void setEspecialidades(const QVector<CEspecialidad *> &newEspecialidades);
    const QVector<CCita *> &getCitas() const;
    void setCitas(const QVector<CCita *> &newCitas);
    void agregarDoctor(CDoctor *doctor);
    void agregarEspecialidad(CEspecialidad *especialidad);
    void agregarPaciente(CPaciente *paciente);
    void agregarCita(CCita* cita);
};

#endif // CPROGRAMA_H
