#include "Figure.h"
#include "Vector.h"
#include <cmath>
#include <iostream>
using namespace std;

Figure::Figure() {
	cout << "X: ";
	cin >> this->x1;
	cin >> this->x2;
	cin >> this->x3;
	cin >> this->x4;
	cout << "Y: ";
	cin >> this->y1;
	cin >> this->y2;
	cin >> this->y3;
	cin >> this->y4;

	this->a.set(x1, x2, y1, y2);
	this->b.set(x2, x3, y2, y3);
	this->c.set(x3, x4, y3, y4);
	this->d.set(x4, x1, y4, x1);

	this->P = a.len() + b.len() + c.len() + d.len();
	this->S = sqrt(P / 2 * (pow(P / 2 - a.len(), 2) + pow(P / 2 - b.len(), 2) + pow(P / 2 - c.len(), 2) + pow(P / 2 - d.len(), 2)));
}

void Figure::show() {
	cout << "A = " << a.len() << "B = " << b.len() << " C = " << c.len() << "= D = " << d.len() << "\n";
	cout << " = " << this->P << " = " << this->S;
}

bool Figure::is_prug() {
	bool angles_90 = a.angle(b) == 90 && c.angle(d) == 90;
	bool opposide_sides_equal = a.len() == c.len() && b.len() == d.len();

	return angles_90 && opposide_sides_equal;
}

bool Figure::is_square() {
	bool angles_90 = a.angle(b) == 90 && c.angle(d) == 90;
	bool all_sides_equal = a.len() == b.len() && b.len() == c.len() && c.len() == d.len();

	return angles_90 && all_sides_equal;
}

bool Figure::is_romb() {
	bool all_sides_equal = a.len() == b.len() && b.len() == c.len() && c.len() == d.len();
	bool opposite_angles_equal = a.angle(b) == c.angle(d) && d.angle(a) == b.angle(c);




	return all_sides_equal && opposite_angles_equal;
}

bool Figure::is_in_circle() {
	return a.angle(b) == c.angle(d) && d.angle(a) == b.angle(c);
}

bool Figure::is_out_circle() {
	return a.len() + c.len() == b.len() + d.len();
}