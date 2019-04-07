//EJERCICIO 4 HOJA 4

#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	//ENTRADA
	int Horas;
	int Pago;

	//LOGICA
	cout << "Horas: ";
	cin >> Horas;
	Pago = (Horas <= 40)*Horas * 16 + ((Horas > 40) * 16 * 40 + (Horas - 40)*20);
	
	//SALIDA
	cout << "Su pago sera:" << Pago << endl;
	_getch();
}