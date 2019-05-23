#include<iostream>
#include <conio.h>
using namespace std;

void EsBisiesto(int a�o) 
{
	if (a�o % 4 == 0 && (a�o % 100 != 0 || a�o % 400 == 0)) {
		cout << "El anio " << a�o << " si es bisiesto. " << endl;
	}
	else {
		cout << "El anio " << a�o << " no es bisiesto. " << endl;
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