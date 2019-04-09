//EJERCICIO 8 HOJA 7
#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	//ENTRADA
	double num, precio, precio1, precio2;
	char tipo, socio;

	//LOGICA
	cout << "Ingrese la zona elegida(Vip =V o v, Platea = P o p, Popular = E o e) : " << endl;
	cin >> tipo;
	cout << "Ingrese el numero de entradas : " << endl;
	cin >> num;
	cout << "Es socio de la U(S o s : si; N o n: no) : " << endl;
	cin >> socio;

	if ((tipo == 'V') || (tipo == 'v'))
	{
		precio = 350.00;

		if ((3 <= num) && (num <= 6))
		{
			precio1 = precio * num * 95 / 100.00;
		}
		if ((7 <= num) && (num <= 9))
		{
			precio1 = precio * num * 92.5 / 100.00;
		}
		if (num > 9)
		{
			precio1 = precio * num * 90 / 100.00;
		}
		if ((socio == 'S') || (socio == 's'))
		{
			precio2 = precio1 * 92 / 100.00;
		}
		if ((socio == 'N') || (socio == 'n'))
		{
			precio2 = precio1;


		}
	}
	if ((tipo == 'P') || (tipo == 'p'))
	{
		precio = 130.00;

		if ((3 <= num) && (num <= 6))
		{
			precio1 = precio * num * 95 / 100.00;
		}
		if ((7 <= num) && (num <= 9))
		{
			precio1 = precio * num * 92.5 / 100.00;
		}
		if (num > 9)
		{
			precio1 = precio * num * 90 / 100.00;
		}
		if ((socio == 'S') || (socio == 's'))
		{
			precio2 = precio1 * 92 / 100.00;
		}
		if ((socio == 'N') || (socio == 'n'))
		{
			precio2 = precio1;


		}
	}
	if ((tipo == 'E') || (tipo == 'e'))
	{
		precio = 50.00;

		if ((3 <= num) && (num <= 6))
		{
			precio1 = precio * num * 95 / 100.00;
		}
		if ((7 <= num) && (num <= 9))
		{
			precio1 = precio * num * 92.5 / 100.00;
		}
		if (num > 9)
		{
			precio1 = precio * num * 90 / 100.00;
		}
		if ((socio == 'S') || (socio == 's'))
		{
			precio2 = precio1 * 92 / 100.00;
		}
		if ((socio == 'N') || (socio == 'n'))
		{
			precio2 = precio1;


		}
	}
	

	//SALIDA
	cout << "El monto a pagar es: " << precio2 << endl;
	_getch();
}