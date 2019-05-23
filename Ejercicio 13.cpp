#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
#define Num_pi 3.141516

void AyPCircunferencia(double radio, double &A, double &P);

void AyPCircunferencia(double radio, double &A, double &P) 
{
	A = Num_pi * (pow(radio, 2));
	P = 2 * Num_pi*radio;

}
int main() 
{
	double radio;
	double area;
	double perimetro;

	do
	{
		cout << "Ingrese el radio: ";
		cin >> radio;
	} while (radio < 0);

	AyPCircunferencia(radio, area, perimetro);
	cout << "El area de la circunferencia es: " << area << endl;
	cout << "El perimetro de la circunferencia es: " << perimetro << endl;

	_getch();
}