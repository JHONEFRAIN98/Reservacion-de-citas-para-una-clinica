#ifndef CCITA_H
#define CCITA_H
#include "cdoctor.h"
#include "cpaciente.h"
class CCita
{
protected:
    CDoctor *doctor;
    CPaciente *paciente;
    QString fecha_str;
    QDateTime *fecha;
    double precio;
public:
    CCita();
    CCita(CDoctor *doctor, CPaciente *paciente, const QString &fecha_str, QDateTime *fecha, double precio);
    CDoctor *getDoctor() const;
    void setDoctor(CDoctor *newDoctor);
    CPaciente *getPaciente() const;
    void setPaciente(CPaciente *newPaciente);
    const QString &getFecha_str() const;
    void setFecha_str(const QString &newFecha_str);
    QDateTime *getFecha() const;
    void setFecha(QDateTime *newFecha);
    double getPrecio() const;
    void setPrecio(double newPrecio);
};

#endif // CCITA_H
