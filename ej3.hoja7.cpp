//ej3 hoja7

#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int Sueldobas = 2500;
int BonEx = 500;
int bon1 = 1400;
int bon2 = 1500;
int bon3 = 1200;
int bon4 = 800;

int main()
{
	string n;
	int e;
	int monto;

	printf("Indique si es Nacional = 'N'o Extranjero = 'E'\n");
	cin >> n;

	if (n == "N")
	{
		printf("Indique su edad:\n");
		cin >> e;

		if (e >= 15 && e<=20 )
		{
			monto = Sueldobas + bon1;
			cout << "Usted recibe como pago:" << monto << " soles" << endl;
		}
		if (e >= 21 && e <= 25)
		{
			monto = Sueldobas + bon2;
			cout << "Usted recibe como pago:" << monto << " soles" << endl;
		}
		if (e >= 26 && e <= 30)
		{
			monto = Sueldobas + bon3;
			cout << "Usted recibe como pago:" << monto << " soles" << endl;
		}
		if (e > 30)
		{
			monto = Sueldobas + bon4;
			cout << "Usted recibe como pago:" << monto << " soles" << endl;
		}
	}
	if (n == "E")
	{
		printf("Indique su edad:\n");
		cin >> e;

		if (e >= 15 && e <= 20)
		{
			monto = Sueldobas + BonEx + bon1;
			cout << "Usted recibe como pago:" << monto << " soles" << endl;
		}
		if (e >= 21 && e <= 25)
		{
			monto = Sueldobas + BonEx + bon2;
			cout << "Usted recibe como pago:" << monto << " soles" << endl;
		}
		if (e >= 26 && e <= 30)
		{
			monto = Sueldobas + BonEx + bon3;
			cout << "Usted recibe como pago:" << monto << " soles" << endl;
		}
		if (e > 30)
		{
			monto = Sueldobas + BonEx + bon4;
			cout << "Usted recibe como pago:" << monto << " soles" << endl;
		}

		
	}

	_getch();
}
