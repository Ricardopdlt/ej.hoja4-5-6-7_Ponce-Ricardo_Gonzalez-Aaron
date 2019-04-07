//EJERCICIO 1  HOJA 6
#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	//ENTRADA
	int litrosConsumidos;
	const int cuotaMensualFija = 20;
	const float cobroEntre51y200 = 2;
	const float cobroMayor200 = 3.5;
	float gastoAgua;


	//LOGICA
	cout << "Ingrese la cantidad de litros consumidos: ";
	cin >> litrosConsumidos;

	if (litrosConsumidos <= 50)
	{
		gastoAgua = cuotaMensualFija;
	}
	else
	{
		if (litrosConsumidos >= 51 && litrosConsumidos <= 200)
		{
			gastoAgua = cuotaMensualFija + (litrosConsumidos - 50) * cobroEntre51y200;
		}
		else
		{
			gastoAgua = cuotaMensualFija + 150 * 2 + (litrosConsumidos - 200) * cobroMayor200;
		}
	}

	//SALIDA
	cout << "El monto a pagar es: " << gastoAgua << endl;

	_getch();
}