//ej2 hoja7

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()

{ //entrada
	long num;
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;

  //logica
	cout << "Ingrese el numero de 6 digitos: ";
	cin >> num;
	a = (num / 100000);
	b = (num / 10000) % 10;
	c = (num / 1000) % 10;
	d = (num / 100) % 10;
	e = (num / 10) % 10;
	f = (num % 10);
  //salida
	printf("El nuevo numero es: ");
	cout << a << f << b << e << c << d;

	_getch();
}