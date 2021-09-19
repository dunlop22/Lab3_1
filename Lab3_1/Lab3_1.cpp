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
#include "Voditel.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Voditel Avd1;
	Avd1.new_voditel_info();
	Avd1.prosmotr_voditel();
}

