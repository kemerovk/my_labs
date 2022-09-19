#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

double func_1(double a, double b)
{
	if (tan(7 * a + sin(b)) != 0)
	{	
		if (1 / tan(7 * a + sin(b)) >= 0)
		{
			return sqrt(1 / tan(7 * a + sin(b)));
		}
		else
		{
			return 0;
		}
	}	
	else
	{
		return 0;
	}
}

int main() {
	double x, y, a;
	setlocale(LC_CTYPE, "Rus");

	cout << "¬ведите значение а: ";
	cin >> a;

	while (a > 999999.999999 || a < -999999.999999)
	{
		cout << "¬ведите корректное число a: ";
		cin >> a;
	}
	printf("---------------------------------------------------------------------------\n|        x        |           a           |                 y             |\n---------------------------------------------------------------------------\n");
	
	for (x = -4.2; x <= 6; x += 1.2) {
		y = func_1(a, x);

		if (y != 0)
		{
			printf("|%10f       |%17f      |%21.6f          |\n---------------------------------------------------------------------------\n", x, a, y);
		}
		else 
		{
			printf("|%10f       |%17f      | %21.6s         |\n---------------------------------------------------------------------------\n", x, a, "NAN         ");
		}
	}
	return 0;
}
