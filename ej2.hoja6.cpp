//EJERCICIO 2 HOJA 6
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	//ENTRADA
	long long num;

	//LOGICA
	cout << "ingrese codigo de barras: ";
	cin >> num;
	cout << "dia de vencimiento: ";
	cout << (num % 1000000000000) / 10000000000 << endl;
	cout << "mes de vencimiento: ";
	cout << (num % 10000000000) / 100000000 << endl;
	cout << "año de vencimiento: ";
	cout << (num % 100000000) / 10000 << endl;
	cout << "tipo de producto: ";
	cout << char((num % 10000) / 100) << endl;//ascii
	cout << "producto perecible: ";
	int perecible = num % 100;
	//SALIDA
	if (perecible == 00)
	{
		cout << "Es perecible ";
	}
	else
	{
		cout << "No es perecible";
	}
	_getch();
}