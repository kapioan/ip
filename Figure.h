#include "Vector.h"
class Figure
{
private:
	float x1, x2, x3, x4;
	float y1, y2, y3, y4;
	float P, S;
	Vector a, b, c, d;

public:
	Figure();
	void show();
	bool is_prug();
	bool is_square();
	bool is_romb();
	bool is_in_circle();
	bool is_out_circle();
};