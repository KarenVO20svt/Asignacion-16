#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
#define Num_pi 3.141516

double ACircunferencia(double r);
double PCircunferencia(double r);

double ACircunferencia(double r) 
{
	double A;
	A = Num_pi * (pow(r, 2));
	return A;
}
double PCircunferencia(double r) 
{
	double P;
	P = 2 * Num_pi * r;
	return P;
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
	cout << "El perimetro de la circunferencia es: " << PCircunferencia(radio) << endl;

	_getch();
}