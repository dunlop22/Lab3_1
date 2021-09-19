#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <malloc.h>
#include <string>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <io.h>
#include <fcntl.h>
#include <stdlib.h>
#include "Motor.h";
#include "Obchee.h";
#include "Korobka.h";
#include "Koleso.h";
#include "Voditel.h";
#include "Avto.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Motor Motorishe;
	Korobka Korobas;
	Obchee Obchie;
	Koleso Kolesiki;
	Voditel Avd1;
	Avto Avt1;
	
	
	if (Motorishe.motor_get() == 1)
	{
		cout << "ЕСТЬ ИНФА пацанам";
	}
	else
	{
		cout << "НЕТУ ДВИЖКА";
	}
	
	_getch();
	Motorishe.new_motor_info();
	Avd1.new_voditel_info();
	Korobas.new_korobka_info();
	Kolesiki.new_koleso_info();
	Obchie.new_obchee_info();
	
	Avt1.new_avto(Motorishe, Obchie, Korobas, Kolesiki, Avd1);
	Avt1.prosmotr_avto();
}

