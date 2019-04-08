#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

double IMC(double x, double y)
{
	double imc = x / (y*y);
	return imc;
}

	int main()
	{
		printf("Vamos a calcular si IMC\n");
		printf("Ingrese su peso en kg\n");
		double p;
		cin >> p;
		printf("Ingrese su altura en m\n");
		double a;
		cin >> a;
		double res = IMC(p, a);
		
		cout << "Su IMC es de " << res << " Kg/m^2" << endl;

		if (res<15)
		{
			printf("Requiere ingreso urgente al hospital");
		}
		if (res >= 15 && res <= 20)
		{
			printf("Posee bajo peso");
		}
		if (res > 20 && res <= 30)
		{
			printf("Posee peso normal (saludable)");
		}
		if (res > 30 && res <= 40)
		{
			printf("Posee sobrepeso");
		}
		if (res > 40)
		{
			printf("Posee sobrepeso cronico");
		}
		
		_getch();
	}