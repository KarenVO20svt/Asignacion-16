#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

double Factorial(int N);
double Combinatorio(int N, int K);

double Factorial(int N) 
{
	int F = 1;
	for (int i = 1; i <= N; i++)
	{
		F *= i;
	}
	return F;
}

double Combinatorio(int N, int K) 
{
	double C;
	C = Factorial(N) / (Factorial(K)*Factorial(N - K));
	return C;
}

int main() 
{
	int N, K;
	cout << "Ingrese el valor de N: ";
	cin >> N;
	cout << "Ingrese el valor de K: ";
	cin >> K;

	cout << "Combinatorio = " << Combinatorio(N, K) << endl;

	_getch();
}