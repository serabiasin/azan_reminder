#ifndef JADWAL_AZAN_H
#define JADWAL_AZAN_H

#include <QWidget>
#include <QLabel>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QString>
#include <QFrame>

#include "calculation_azan/azan_calculation.h"

class jadwal_azan : public QWidget
{
    Q_OBJECT
public:
    explicit jadwal_azan(QWidget *parent = nullptr);
    void setting_up();
    void set_variable();
    /*kita mengambil data dari static variable azan_calculation
     * dari variable jam dan waktu lalu di kombinasikan dengan string*/


private slots:
    void set_time_table(); //untuk dipakai di class setting kota
private:
    QLabel *shubuh_time;
    QLabel *dzuhur_time;
    QLabel *ashar_time;
    QLabel *maghrib_time;
    QLabel *isha_time;
    QLabel *time_azan[5]; //this will start from subuh index=0
    QVBoxLayout *view_sholat;
    QVBoxLayout *view_waktu;
    QHBoxLayout *view_estimated;
    QGridLayout *rapi;
    QLabel *estimated;
    QLabel *time_estimated;
    QPushButton *refresh;
};


#endif // JADWAL_AZAN_H
