//EJERCICIO 7 HOJA 7
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int main()
{
	//ENTRADA
	char modelo;
	char color;
	float precio1;
	float incremento;
	float preciototal;
	int edad;

	//LOGICA
	cout << "Ingresar el modelo (A o B): ";
	cin >> modelo;
	cout << "Ingresar el color (B: blanco; M: metalizado; O: otros): ";
	cin >> color;
	cout << "Ingresar la edad: ";
	cin >> edad;

	modelo = toupper(modelo);
	color = toupper(color);

	precio1 = (modelo == 'A' && color == 'B')*240.50 + (modelo == 'A' && color == 'M') * 330 + (modelo == 'A' && color == 'O')*270.50 + (modelo == 'B' && color == 'B') * 300 + (modelo == 'B' && color == 'M')*360.50 + (modelo == 'B' && color == 'O') * 330;

	incremento = (edad < 31)*(precio1*0.25) + (edad >= 31 && edad <= 65) * 0 + (edad > 65)*(precio1*0.10);

	preciototal = precio1 + incremento;

	//SALIDA
	cout << "El precio del seguro es: " << preciototal << endl;
	_getch();
}