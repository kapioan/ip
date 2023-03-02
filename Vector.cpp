#include "Vector.h"
#include <cmath>

void Vector::set(float x1, float x2, float y1, float y2) {
	this->x1 = x1;
	this->x2 = x2;
	this->y1 = y1;
	this->y2 = y2;
}

float Vector::len() {
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

float Vector::scalar(Vector a) {
	return (x1 - x2) * (a.x1 - a.x2) + (y1 - y2) * (a.y1 - a.y2);
}

float Vector::angle(Vector a) {
	return round(acos(this->scalar(a) / (this->len() * a.len())));

}