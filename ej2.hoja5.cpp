//Ej2
//Mostrar los dias de un mes

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int main()
{
	//entrada
	int *mes;
	int *dias;

	mes = new int;
	dias = new int;

	*dias = 0;


	//logica
	cout << "Ingrese el mes del que desea conocer su numero de dias:\n";
	cin >> *mes;
	*dias = (*mes >12)*0 +(*mes == 1) * 31 + (*mes == 2) * 28 + (*mes == 3) * 31 + (*mes == 4) * 30 + (*mes == 5) * 31 + (*mes == 6) * 30
		+ (*mes == 7) * 31 + (*mes == 8) * 31 + (*mes == 9) * 30 + (*mes == 10) * 31 + (*mes == 11) * 30 + (*mes == 12) * 31;

	//salida
	cout << "El mes " << *mes << " tiene " << *dias << " dias";


	_getch();


}