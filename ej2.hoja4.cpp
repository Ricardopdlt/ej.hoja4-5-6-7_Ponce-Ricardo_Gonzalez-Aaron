//Ejercicio 2
//Calcular el monot a pagar segun el sexo y edad de la persona

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


int monto1 = 1000;
int monto2 = 700;
int monto3 = 800;
int monto4 = 500;


int main()
{
	int s;
	int e;

	printf("Indique cual es su sexo: Hombre = 1, Mujer = 2\n");
	cin >> s;

	if (s == 1)
	{
		cout << "Su pago se rige bajo los precios de hombres\n";
		printf("Indique su edad:\n");
		cin >> e;

		if (e < 25)
		{
			cout << "Usted debe pagar:" << monto1 << "soles" << endl;
		}
		else
		{
			cout << "Usted debe pagar:" << monto2 << "soles" << endl;
		}
	}
	if (s == 2)
	{
		cout << "Su tarifa se rige bajo los precios de mujeres\n";
		printf("Indique su edad:\n");
		cin >> e;

		if (e < 21)
		{
			cout << "Usted debe pagar:" << monto3 << "soles" << endl;
		}
		else
		{
			cout << "Usted debe pagar:" << monto4 << "soles" << endl;
		}
	}

	_getch();
}