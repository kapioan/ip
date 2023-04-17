#include <iostream>
class type2 {
private:
    double A;
public:
    type2(double a1) {
        A = a1;
    }
    
    void Get_answer() {
        std::cout << "Уравнение имеет решение х = 0." << std::endl;
    }
    
    void show() {
        std::cout << A << "x^2 = 0" << std::endl;
    }
};
int main() {
    type2 t2(3.5);
    t2.show();
    t2.Get_answer();
    
    return 0;
}