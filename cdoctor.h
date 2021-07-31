#ifndef CDOCTOR_H
#define CDOCTOR_H
#include "cpersona.h"
#include "cespecialidad.h"
class CDoctor : public CPersona
{
protected:
   CEspecialidad *especialidad;
   double salario;
public:
   CDoctor();
   CDoctor(CEspecialidad *especialidad, double salario);
    CEspecialidad *getEspecialidad() const;
    void setEspecialidad(CEspecialidad *newEspecialidad);
    double getSalario() const;
    void setSalario(double newSalario);
};

#endif // CDOCTOR_H
