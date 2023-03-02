class Circle {
private:

	float r, x_center, y_center;
	const float pi = 3.1415;

public:

	Circle();
	void set_circle(float r, float x, float y);
	float square();
	bool triangle_around(float a, float b, float c);
	bool triangle_in(float a, float b, float c);
	bool check_circle(float r, float x_cntr, float y_cntr);

};