#ifndef CESPECIALIDAD_H
#define CESPECIALIDAD_H
#include <QCoreApplication>

class CEspecialidad
{
private:
    QString nombre;
    QString descripcion;
public:
    CEspecialidad();
    CEspecialidad(const QString &nombre, const QString &descripcion);
    const QString &getNombre() const;
    void setNombre(const QString &newNombre);
    const QString &getDescripcion() const;
    void setDescripcion(const QString &newDescripcion);
};

#endif // CESPECIALIDAD_H
