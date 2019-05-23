#include <iostream>
#include <conio.h>
using namespace std;

float aSoles(float d);
float aDolares(float s);

float aSoles(float d)
{
	float s;
	s = d * 3.33;
	return s;
}

float aDolares(float s)
{
	float d;
	d = s * 0.30;
	return d;
}

int main()
{
	float soles, dolares;
	int opcion;

	while (1) 
	{
		cout << "¿Quieres dolares o soles (1: Soles | 2: Dolares | 3: Fin)?" << endl;
		cin >> opcion;

		if (opcion == 3) {
			break;
		}
		else
		{

			switch (opcion)
			{
			case 1:
				cout << "Ingrese la cantidad de dolares a cambiar: ";
				cin >> dolares;
				cout << "El dinero ingresado a soles es: " << float(aSoles(dolares)) << endl;
				break;
			case 2:
				cout << "Ingrese la cantidad de soles a cambiar: ";
				cin >> soles;
				cout << "El dinero ingresado en dolares es: " << float(aDolares(soles)) << endl;
				break;
			default:
				cout << "ERROR" << endl;
				break;
			}
		}
	}

	_getch();
}