#include "circle.h"
#include "Triangle.h"
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

Circle::Circle() {
	float nr, nx_center, ny_center;
	cout << "(X, Y): ";
	cin >> r >> nx_center >> ny_center;
	r = r;
	x_center = nx_center;
	y_center = ny_center;
}

void Circle::set_circle(float r1, float x1, float y1) {
	this->r = r1;
	this->x_center = x1;
	this->y_center = y1;
}

float Circle::square() {
	return this->pi * this->r * this->r;
}

bool Circle::triangle_in(float a, float b, float c) {
	Triangle t;
	t.set(a, b, c);
	return r == a * b * c / (4 * t.square());
}

bool Circle::triangle_around(float a, float b, float c) {
	Triangle t;
	t.set(a, b, c);
	float p = t.perimetr() / 2;
	return r == (t.square() / p);
}

bool Circle::check_circle(float r1, float x, float y) {
	float max_r = max(this->r, r1);
	float min_r = min(this->r, r1);
	float center_dist = sqrt(pow(x - this->x_center, 2) + pow(y - this->y_center, 2));

	return max_r + min_r < center_dist&& center_dist + min_r < min_r;
}