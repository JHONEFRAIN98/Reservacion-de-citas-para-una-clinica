#ifndef CPERSONA_H
#define CPERSONA_H
#include <QCoreApplication>

class CPersona
{
protected:
    QString nombre;
    QString apellido_paterno;
    QString apellido_materno;
    QString documento;
    QString sexo;
    int edad;
public:
    CPersona();
    CPersona(const QString &nombre, const QString &apellido_paterno, const QString &apellido_materno, const QString &documento, const QString &sexo, int edad);
    const QString &getNombre() const;
    void setNombre(const QString &newNombre);
    const QString &getApellido_paterno() const;
    void setApellido_paterno(const QString &newApellido_paterno);
    const QString &getApellido_materno() const;
    void setApellido_materno(const QString &newApellido_materno);
    const QString &getDocumento() const;
    void setDocumento(const QString &newDocumento);
    const QString &getSexo() const;
    void setSexo(const QString &newSexo);
    int getEdad() const;
    void setEdad(int newEdad);
};

#endif // CPERSONA_H
