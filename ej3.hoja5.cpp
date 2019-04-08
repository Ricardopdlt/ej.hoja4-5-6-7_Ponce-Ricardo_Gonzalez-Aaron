//Ej 3
//Mencionar en que cuadrante se encuentra la coordenada colocada

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

//Entrada
double x;
double y;

//Logica
int main()
{
	cout << "Ingrese coordenada X:\n";
	cin >> x;
	cout << "Ingrese coordenada Y\n";
	cin >> y;

	if (x > 0 && y > 0)
	{
		cout << "La coordenada" << " ( " << x << " ; " << y << " ) " << "pertenece al primer cuadrante";
	}
	if (x < 0 && y>0)
	{
		cout << "La coordenada" << " ( " << x << " ; " << y << " ) " << "pertenece al segundo cuadrante";
	}
	if (x < 0 && y < 0)
	{
		cout << "La coordenada" << " ( " << x << " ; " << y << " ) " << "pertenece al tercer cuadrante";
	}
	if (x > 0 && y < 0)
	{
		cout << "La coordenada" << " ( " << x << " ; " << y << " ) " << "pertenece al cuarto cuadrante";
	}


	_getch();
}