#pragma once
class Motor
{
	char name[20];
	double rab_obem;
	double koni;
	double rasxod;
	double kol_vo_cilindr;
	double klapan;
public:
	Motor();
	void new_motor_info();
	void new_motor(double koni, double rasxod, char name[20], double rab_obem, double kol_vo_cilindr, double klapan);
	void prosmotr_motor();
	void motor_force();
};

