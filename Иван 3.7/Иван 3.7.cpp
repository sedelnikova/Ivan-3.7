// Иван 3.7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float A, O, E;

	cout << "Введите, пожалуйста, A =";
	cin >> A;
	O = A * A * A;
	E = O * O;
	O = E * E * O;

	cout << "A= " << O << endl;
	return 0;
}