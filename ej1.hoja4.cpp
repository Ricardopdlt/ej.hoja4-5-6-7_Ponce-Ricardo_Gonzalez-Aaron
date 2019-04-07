//EJERCICIO 1 HOJA 4

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	//ENTRADA
	int neumaticos;
	int	preciof;
	int precio;

	//Restricciones
	/*
	numNeumaticos > 0
	*/

	//LOGICA
	cout << "neumaticos a comprar ";
	cin >> neumaticos;
	if (neumaticos < 3)
	{
		precio = 145;

	}
	else if ((3 <= neumaticos) && (neumaticos <= 5))
	{
		precio = 138;
	}
	else
	{
		precio = 135;
	}
	preciof = precio * neumaticos;

	//SALIDA
	cout << "El total a pagar sera de: " << preciof;

	_getch();
}