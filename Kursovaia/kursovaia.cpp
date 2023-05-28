#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
using namespace std;
void clear_screen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
void print_menu() {
    setlocale(LC_ALL, "Russian");
    clear_screen();
    cout << " " << setfill('=') << setw(51) << "" << endl;
    cout << "|" << setfill(' ') << setw(35) << "КВАДРАТНЫЕ УРАВНЕНИЯ" << setfill(' ') << setw(17) << "|" << endl;
    cout << " " << setfill('=') << setw(51) << "" << endl;
    cout << "| 1. Вывод типов квадратных уравнений               |" << endl;
    cout << "| 2. Вывод методов решения квадратных уравнений     |" << endl;
    cout << "| 3. Сравнение методов решения квадратных уравнений |" << endl;
    cout << "| 4. Решение квадратного уравнения                  |" << endl;
    cout << "| 5. Выход из программы                             |" << endl;
    cout << " " << setfill('=') << setw(51) << "" << endl;
}
void print_types() {
    setlocale(LC_ALL, "Russian");
    clear_screen();
    cout << " " << setfill('=') << setw(71) << "" << endl;
    cout << "|" << setfill(' ') << setw(45) << "Типы квадратных уравнений:" << setfill(' ') << setw(27) << "|" << endl;
    cout << " " << setfill('=') << setw(71) << "" << endl;
    cout << "| 1. Обычное квадратное уравнение: ax^2 + bx + c = 0                    |" << endl;
    cout << "| 2. Квадратное уравнение с одним нулевым коэффициентом: ax^2 + c = 0   |" << endl;
    cout << "| 3. Квадратное уравнение с двумя нулевыми коэффициентами: a = 0        |" << endl;
    cout << "| 4. Квадратное уравнение с отрицательным дискриминантом: b^2 - 4ac < 0 |" << endl;
    cout << " " << setfill('=') << setw(71) << "" << endl;
    cout << "  Нажмите любую клавишу, чтобы вернуться в меню" << endl;
    cin.get();
    cin.get();
}
void print_methods() {
    setlocale(LC_ALL, "Russian");
    clear_screen();
    cout << " " << setfill('=') << setw(95) << "" << endl;
    cout << "|" << setfill(' ') << setw(65) << "Методы решения квадратных уравнений:" << setfill(' ') << setw(31) << "|" << endl;
    cout << " " << setfill('=') << setw(95) << "" << endl;
    cout << "| 1. Формула корней: x = (-b +- sqrt(b^2 - 4ac)) / 2a                                           |" << endl;
    cout << "| 2. Метод сравнения корней: x1 = (-b - sqrt(b^2 - 4ac)) / 2a, x2 = (-b + sqrt(b^2 - 4ac)) / 2a |" << endl;
    cout << "| 3. Метод дополнения квадрата: x = sqrt((b/2a)^2 - c/a) +- b/2a                                |" << endl;
    cout << " " << setfill('=') << setw(95) << "" << endl;
    cout << "Нажмите любую клавишу, чтобы вернуться в меню" << endl;
    cin.get();
    cin.get();
}
void compare_methods() {
    setlocale(LC_ALL, "Russian");
    clear_screen();
    cout <<  " " << setfill('=') << setw(73) << "" << endl;
    cout << "|" << setfill(' ') << setw(60) << "Сравнение методов решения квадратных уравнений:" << setfill(' ') << setw(13) << "|" << endl;
    cout << " " << setfill('=') << setw(73) << "" << endl;
    cout << "| Для квадратного уравнения с коэффициентами по умолчанию (a=1, b=2, c=1) |" << endl;
    cout << "| Метод 1 (формула корней): x1 = -1, x2 = -1                              |" << endl;
    cout << "| Метод 2 (метод сравнения корней): x1 = -1, x2 = -1                      |" << endl;
    cout << "| Метод 3 (метод дополнения квадрата): x1 = -1, x2 = -1                   |" << endl;
    cout << " " << setfill('=') << setw(73) << "" << endl;
    cout << "    Нажмите любую клавишу, чтобы вернуться в меню" << endl;
    cin.get();
    cin.get();
}
void solve_equation() {
    setlocale(LC_ALL, "Russian");
    clear_screen();
    cout << " " << setfill('=') << setw(34) << "" << endl;
    cout << "|" << "  Решение квадратного уравнения:  " << "|" << endl;
    cout << " " << setfill('=') << setw(34) << "" << endl;
    double a, b, c;
    cout << " Введите коэффициент a: ";
    cin >> a;
    cout << " Введите коэффициент b: ";
    cin >> b;
    cout << " Введите коэффициент c: ";
    cin >> c;
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        cout << " Уравнение не имеет действительных корней" << endl;
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << " Уравнение имеет один корень: x = " << x << endl;
    }
    else {
        double x1 = (-b - sqrt(discriminant)) / (2 * a);
        double x2 = (-b + sqrt(discriminant)) / (2 * a);
        cout << " Уравнение имеет два корня: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    cout << "  Нажмите любую клавишу, чтобы вернуться в меню" << endl;
    cin.get();
    cin.get();
}
int main() {

    int choice = 0;
    while (choice != 5) {
        print_menu();
        cin >> choice;
        switch (choice) {
        case 1:
            print_types();
            break;
        case 2:
            print_methods();
            break;
        case 3:
            compare_methods();
            break;
        case 4:
            solve_equation();
            break;
        case 5:
            clear_screen();
            cout << "До свидания!" << endl;
            break;
        default:
            cout << "Неверный выбор! Попробуйте еще раз." << endl;
            cin.get();
            cin.get();
            break;
        }
    }
    return 0;
}