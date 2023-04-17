#include <iostream>
#include <cmath>
using namespace std;
class type_6 {
    double A, B, C;
public:
    type_6(double a1, double b1, double c1) {
        A = a1;
        B = b1;
        C = c1;
    }
    void show() {
        cout << A << "x^2 + " << B << "x + " << C << " = 0\n";
    }
    void Get_answer() {
        double D = B * B - 4 * A * C;
        if (A == 0) {
            if (B == 0) {
                if (C == 0) {
                    cout << "x - любое число\n";
                }
                else {
                    cout << "Нет корней\n";
                }
            }
            else {
                cout << "x = " << -C / B << endl;
            }
        }
        else if (D > 0) {
            double x1 = (-B + sqrt(D)) / (2 * A);
            double x2 = (-B - sqrt(D)) / (2 * A);
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else if (D == 0) {
            double x = -B / (2 * A);
            cout << "x = " << x << endl;
        }
        else {
            cout << "Нет корней\n";
        }
    }
};
int main() {
    double a, b, c;
    cout << "Введите коэффициенты уравнения Ax^2 + Bx + C = 0:\n";
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    cout << "C = ";
    cin >> c;
    type_6 num(a, b, c);
    num.show();
    num.Get_answer();
    return 0;
}