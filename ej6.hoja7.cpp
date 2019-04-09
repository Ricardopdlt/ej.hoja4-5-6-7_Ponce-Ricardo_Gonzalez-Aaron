//EJERCICIO 2 HOJA 6
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	//ENTRADA
	long long num;
	int tiempo;
	int h;
	int m;
	int s;

	//LOGICA
	cout << "Ingrese codigo de barras: ";
	cin >> num;
	cout << "Hora de entrada: ";
	cout << (num % 1000000) / 10000 << endl;
	h = (num % 1000000) / 10000;
	cout << "Minuto de entrada: ";
	cout << (num % 10000) / 100 << endl;
	m = (num % 10000) / 100;
	cout << "Segundo de entrada: ";
	cout << num % 100 <<endl;
	s = num % 100;
	cout << "Su nombre empieza con la letra: ";
	cout << char((num % 1000000000000) / 10000000000) << endl;//ascii
	cout << "Su apellido paterno empieza con la letra: ";
	cout << char((num % 10000000000) / 100000000) << endl;//ascii
	cout << "Su apellido materno empieza con la letra:";
	cout << char((num % 100000000) / 1000000) << endl;//ascii
	cout << "Llego tarde (si = 1, no = 0):";
	tiempo = (h < 9) * 0 + (h > 9) * 1 + (h == 9 && m == 0 && s == 0) * 0 + (h == 9 && m == 0 && s >= 1) * 1 + (h == 9 && m >= 1 && s == 0) * 1 + (h == 9 && m >= 1 && s >= 1) * 1;
	cout << tiempo;
	
	
	_getch();
}