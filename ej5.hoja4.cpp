//EJERCICIO 5 HOJA 4

#include <iostream>
#include <conio.h>
#include<stdio.h>

using namespace std;



int main()
{
	//ENTRADA
	int precio, preciof, cantidad;
	double monto;
	double igv;

	//LOGICA
	cout << "Indicar el precio:";
	cin >> precio;
	cout << "Indicar la cantidad:";
	cin >> cantidad;
	preciof = precio * cantidad;
	igv = 0.18;
	monto = (preciof)+(igv*preciof);

	//SALIDA
	cout << "El monto a pagar es:" << monto;


	_getch();
	return 0;
}