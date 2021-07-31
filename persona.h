#ifndef PERSONA_H
#define PERSONA_H

#include <QDialog>

namespace Ui {
class Persona;
}

class Persona : public QDialog
{
    Q_OBJECT

public:
    explicit Persona(QWidget *parent = nullptr);
    ~Persona();

private:
    Ui::Persona *ui;
};

#endif // PERSONA_H
