#include <iostream>
#include <conio.h>
using namespace std;

void intercambio(int *N1, int *N2);

void intercambio(int *N1, int *N2)
{
	int aux;
	if (*N1 > *N2)
	{
		aux = *N1;
		*N1 = *N2;
		*N2 = aux;
	}
}

int main()
{
	int N1, N2;
	int *n1, *n2;

	n1 = &N1;
	n2 = &N2;

	cout << "Ingrese el valor de la primera variable: ";
	cin >> N1;
	cout << "Ingrese el valor de la segunda variable: ";
	cin >> N2;

	cout << endl;
	intercambio(n1, n2);
	cout << "Valor de la variable menor: " << N1 << endl;
	cout << "Valor de la variable mayor: " << N2 << endl;

	_getch();
}