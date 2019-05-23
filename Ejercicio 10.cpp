#include<iostream>
#include<math.h>
#include <conio.h>
using namespace std;
#define NUM_PI 3.141516

void ACircunferencia(double r);

void ACircunferencia(double r) 
{
	double A;
	A = NUM_PI * (pow(r, 2));
	cout << "El area de la circunferencia es: " << A << endl;
}
int main() 
{
	double radio;
	do
	{
		cout << "Ingrese el radio: ";
		cin >> radio;
	} while (radio < 0);

	ACircunferencia(radio);

	_getch();
}