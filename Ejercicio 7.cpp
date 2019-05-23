#include <iostream>
#include <conio.h>
using namespace std;

int Invertir(long long numero);

int Invertir(long long numero) 
{
	long long I = 0;
	while (numero > 0) 
	{
		I = I * 10 + (numero % 10);
		numero /= 10;
	}
	return I;
}

int main() {
	long long N;

	do 
	{
		cout << "Ingrese un numero para invertir: ";
		cin >> N;
	} while (N < 0);

	cout << "El numero invertido es " << Invertir(N) << endl;

	_getch();
}