#include <iostream>
#include "Ilin_LR2_meth.h"
using namespace std;

int main() {
    double x = 0.0, y = 0.0, z = 0.0; // Входные числа
    int choice;
    string input;

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
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Введите число x: ";
            getline(cin, input);
            if (!inputNumberX(input, x)) {
                cout << "Ошибка ввода!" << endl;
            }
            break;
        case 2:
            cout << "Введите число y: ";
            getline(cin, input);
            if (!inputNumberY(input, y)) {
                cout << "Ошибка ввода!" << endl;
            }
            break;
        case 3:
            cout << "Введите число z: ";
            getline(cin, input);
            if (!inputNumberZ(input, z)) {
                cout << "Ошибка ввода!" << endl;
            }
            break;
        case 4:
            cout << "Сумма дробных частей: " << calculateFractionalSum(x, y, z) << endl;
            break;
        case 5:
            cout << "Сумма целых частей: " << calculateIntegerSum(x, y, z) << endl;
            break;
        case 6:
            cout << "Выход из программы." << endl;
            return 0;
        default:
            cout << "Неверный выбор. Попробуйте снова." << endl;
        }
    }
}