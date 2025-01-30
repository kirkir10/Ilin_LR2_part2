#include "iostream"
#include "cmath"
#include <Ilin_LR2_meth.h>
using namespace std;

int main() {
    double x = 0.0, y = 0.0, z = 0.0; // Входные числа
    int choice;

    while (true) {
        // Меню приложения
        cout << "\n=== Меню ===" << endl;
        cout << "1. Ввести число x" << endl;
        cout << "2. Ввести число y" << endl;
        cout << "3. Ввести число z" << endl;
        cout << "4. Найти сумму дробных частей чисел" << endl;
        cout << "5. Найти сумму целых частей чисел" << endl;
        cout << "6. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputNumberX(x);
                break;
            case 2:
                inputNumberY(y);
                break;
            case 3:
                inputNumberZ(z);
                break;    
            case 4:
                calculateFractionalSum(x, y, z);
                break;
            case 5:
                calculateIntegerSum(x, y, z);
                break;
            case 6:
                cout << "Выход из программы." << endl;
                return 0;
            default:
                cout << "Неверный выбор. Попробуйте снова." << endl;
        }
    }
}


