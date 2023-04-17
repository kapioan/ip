#include <iostream>
class type1 {
public:
    void Get_answer() {
        std::cout << "Уравнение имеет бесконечное количество решений." << std::endl;
    }
    
    void show() {
        std::cout << "0 = 0" << std::endl;
    }
};
int main() {
    type1 t1;
    t1.show();
    t1.Get_answer();
    
    return 0;
}
