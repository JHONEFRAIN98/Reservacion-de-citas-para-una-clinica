#ifndef DOCTORFORM_H
#define DOCTORFORM_H

#include <QDialog>
#include "cdoctor.h"
namespace Ui {
class DoctorForm;
}

class DoctorForm : public QDialog
{
    Q_OBJECT
    QVector<CDoctor*>doctores;
public:
    explicit DoctorForm(QWidget *parent = nullptr);
    DoctorForm(QWidget * parent , QVector<CDoctor*> &doctores);
    ~DoctorForm();

private:
    Ui::DoctorForm *ui;
};

#endif // DOCTORFORM_H
