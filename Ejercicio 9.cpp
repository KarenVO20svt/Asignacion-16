#include <iostream>
#include <conio.h>
using namespace std;

bool FechaEsValida(int dia, int mes, int annio) 
{
	bool bisiesto = 0;
	bool fecha = 0;
	if (annio % 4 == 0 && (annio % 100 != 0 || annio % 400 == 0)) 
	{
		bisiesto = true;
	}

	if (bisiesto == true) 
	{
		if (mes == 2 && (dia >= 1 && dia <= 29)) 
		{
			return true;
		}
		else if (dia >= 1 && dia <= 31) {
			switch (mes) 
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: 
				return true;
				break;
			default: 
				return false;
				break;
			}
		}
		else if (dia >= 1 && dia <= 30) {
			switch (mes) 
			{
			case 4:
			case 6:
			case 8:
			case 9:
			case 11: 
				return true;
				break;
			default: 
				return false;
				break;
			}
		}
		else if (mes == 2 && (dia >= 1 && dia <= 28)) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		if (mes == 2 && (dia >= 1 && dia <= 28)) 
		{
			return true;
		}
		else if (dia >= 1 && dia <= 31) {
			switch (mes) 
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: 
				return true;
				break;
			default: 
				return false;
				break;
			}
		}
		else if (dia >= 1 && dia <= 30) {
			switch (mes) 
			{
			case 4:
			case 6:
			case 8:
			case 9:
			case 11: 
				return true;
				break;
			default: 
				return false;
				break;
			}
		}
	}
}

int main() 
{
	int dia, mes, annio;
	bool fecha;

	do 
	{
		cout << "Ingrese una fecha en formato dd-mm-aa" << endl;
		cin >> dia >> mes >> annio;
	} while (dia < 1 && dia > 31 && mes < 1 && mes >12);

	fecha = FechaEsValida(dia, mes, annio);

	if (fecha == 1) 
	{
		cout << "La fecha es correcta." << endl;
	}
	else {
		cout << "La fecha no es correcta." << endl;
	}

	_getch();
}