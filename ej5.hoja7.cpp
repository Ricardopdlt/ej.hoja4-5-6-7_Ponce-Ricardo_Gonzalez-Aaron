//ej5 hoja7

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

//entrada
int precio1 = 25;
int precio2 = 30;
int precio3 = 35;

int main()
{
	int tipo;
	double pago;
	double pago1;
	printf("[1] Por la compra de una pizza grande descuentan el 10% \n");
	printf("[2] Por la compra de una pizza familiar descuentan el 15 % \n");
	printf("[3] Por la compra de una pizza fiesta descuentan el 20 % \n");
	printf("Imgrese el tipo de pizza que desea 1, 2 o 3\n");
	cin >> tipo;
	
	//logica

	pago = (tipo == 1)*precio1 + (tipo == 2)*precio2 + (tipo == 3)*precio3;
	pago1 = (tipo == 1)*(pago - (pago * 10 / 100)) + (tipo == 2)*(pago - (pago * 15 / 100)) + (tipo == 3)*(pago - (pago * 20 / 100));
	
	//salida
	cout << "La pizza seleccionada fue tipo: " << tipo << endl;
	cout << "El precio de esa pizza es: " << pago << " soles" << endl;
	cout << "El total a pagar es:" << pago1 << " soles" << endl;

	_getch();

}