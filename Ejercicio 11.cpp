#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
#define NUM_PI 3.141516

double ACircunferencia(double r);

double ACircunferencia(double r) 
{
	double A;
	A = NUM_PI * (pow(r, 2));
	return A;
}
int main() 
{
	double radio;
	do
	{
		cout << "Ingrese el radio: ";
		cin >> radio;
	} while (radio < 0);
	cout << "El area de la circunferencia es: " << ACircunferencia(radio) << endl;

	_getch();
}