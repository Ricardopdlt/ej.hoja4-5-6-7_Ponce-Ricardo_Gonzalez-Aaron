//EJERCICIO 3 HOJA 4
#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	//ENTRADA
	int diametro;
	int	ingredientes;
	double diam;
	double ingr;
	double preciof;

	//LOGICA
	cout << "Escriba el diametro: ";
	cin >> diametro;
	cout << "Escriba la cantidad de ingredientes extras que desea colocar: ";
	cin >> ingredientes;
	diam = 1.5;
	ingr = 2.5;
	preciof = (diametro*diam) + (ingredientes*ingr);

	//SALIDA
	cout << "El precio final es:" << preciof << " soles" << endl;
	_getch();
}