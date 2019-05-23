#include<iostream>
#include <conio.h>
using namespace std;

void EsBisiesto(int año) 
{
	if (año % 4 == 0 && (año % 100 != 0 || año % 400 == 0)) {
		cout << "El anio " << año << " si es bisiesto. " << endl;
	}
	else {
		cout << "El anio " << año << " no es bisiesto. " << endl;
	}
}

int main() 
{
	int a;
	do
	{
		cout << "Ingrese el anio: ";
		cin >> a;
	} while (a < 0);

	EsBisiesto(a);

	_getch();
}