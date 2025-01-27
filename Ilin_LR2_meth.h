#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;


// Функция для ввода чисел
void inputNumberX(double &x) {
    cout << "Введите число x: ";
    cin >> x;
}
void inputNumberY(double &y) {
    cout << "Введите число y: ";
    cin >> y;
    cout << "Число Y успешно введено." << endl;
}
void inputNumberZ(double &z) {
    cin >> z;
    cout << "Число Z успешно введено." << endl;
}
// Функция для вычисления суммы дробных частей 
void calculateFractionalSum(double x, double y, double z) {
    double fractionalX = x - floor(x);
    double fractionalY = y - floor(y);
    double fractionalZ = z - floor(z);
    double sum = fractionalX + fractionalY + fractionalZ;

    cout << "Сумма дробных частей: " << sum << endl;
}

// Функция для вычисления суммы целых частей 
void calculateIntegerSum(double x, double y, double z) {
    int integerX = static_cast<int>(x);
    int integerY = static_cast<int>(y);
    int integerZ = static_cast<int>(z);
    int sum = integerX + integerY + integerZ;

    cout << "Сумма целых частей: " << sum << endl;
}
#endif

