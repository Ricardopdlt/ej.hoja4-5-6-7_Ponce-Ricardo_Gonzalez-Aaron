//EJERCICIO 3 HOJA 6

#include <iostream>
#include <conio.h>
#include <string> 

using namespace std;

int main() {
	//ENTRADA
	int years;
	string tipoest;
	cout << "Ingrese la cantidad de años que ha estudiado: " << endl;
	cin >> years;
	cout << "Ingrese su nivel de Estudios (P:primaria; S:secundaria; U:universitario; G:posgrado): " << endl;
	cin >> tipoest;

	//LOGICA
	if (years < 5)
	{
		if (tipoest == "P") {
			cout << "Ha obtenido 10 puntos" << endl;
		}
		else if (tipoest == "S") {
			cout << "Ha obtenido 15 puntos" << endl;
		}
		else if (tipoest == "U") {
			cout << "Ha obtenido 25 puntos" << endl;
		}
		else if (tipoest == "G") {
			cout << "Ha obtenido 35 puntos" << endl;
		}
	}
	else if (years >= 5)
	{
		if (tipoest == "P") {
			cout << "Ha obtenido 15 puntos" << endl;
		}
		else if (tipoest == "S") {
			cout << "Ha obtenido 20 puntos" << endl;
		}
		else if (tipoest == "U") {
			cout << "Ha obtenido 30 puntos" << endl;
		}
		else if (tipoest == "G") {
			cout << "Ha obtenido 40 puntos" << endl;
		}
	}
	_getch();
}