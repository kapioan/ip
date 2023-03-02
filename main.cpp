#include <iostream>
#include "Triangle.h"
#include "triangle.cpp"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	tringle trarr[3];

	float j1, j2, j3;

	int str = 0;
	while (str < 3)
	{
		cout << "стороны треугольника\n";
		cin >> j1 >> j2 >> j3;
		trarr[str].set(j1, j2, j3);
		if (trarr[str].exst_tr())
		{
			str += 1;
		}
		else
		{
			cout << "не может существовать\n";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "треугольник " << i+1 << " периметр " << trarr[i].perimetr() << " площадь " << trarr[i].square() << "\n";
	}

	return 0;
}