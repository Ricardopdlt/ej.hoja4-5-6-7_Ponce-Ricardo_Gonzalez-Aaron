//ej4 hoja7
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

//entrada


int main()
{
	long num;
	int suma;
	int a, b, c, d;

	cout << "Ingrese el numero de 4 digitos: ";
	cin >> num ;

	a = num / 1000;
	b = (num % 1000) / 100;
	c = (num % 100) / 10;
	d = num % 10;

	if (a % 2 == 0) {}
	else
	{
		suma = suma + a;
	}
	if (b % 2 == 0) {}
	else
	{
		suma = suma + b;
	}
	if (c % 2 == 0) {}
	else
	{
		suma = suma + c;
	}
	if (d % 2 == 0) {}
	else
	{
		suma = suma + d;
	}

	//salida
	cout << "La suma de los digitos impares es: " << suma;
	_getch();
}