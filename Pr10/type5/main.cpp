#include <iostream>
#include <cmath>
class type_5 {
    private:
        double B, C;
    public:
        type_5(double b1, double c1) {
            B = b1;
            C = c1;
        }
        void Get_answer() {
            if(B == 0) {
                if(C == 0) {
                    std::cout<<"Имеет бесконечное кол-во решений"<<std::endl;
                } else {
                    std::cout<<"Нет решения"<<std::endl;
                }
            } else {
                double x = -C/B;
                std::cout<<"Ответ: "<<x<<std::endl;
            }
        }
        void show() {
            std::cout<<B<<"x + "<<C<<" = 0"<<std::endl;
        }
};
int main() {
    type_5 num1(2, 4);
    num1.show();
    num1.Get_answer();
    type_5 num2(0, 5);
    num2.show();
    num2.Get_answer();
    type_5 num3(0, 0);
    num3.show();
    num3.Get_answer();
    return 0;
}