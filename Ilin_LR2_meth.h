#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

// Функция для ввода числа X
bool inputNumberX(const string& input, double& x) {
    stringstream ss(input);
    return (ss >> x) ? true : false;
}

// Функция для ввода числа Y
bool inputNumberY(const string& input, double& y) {
    stringstream ss(input);
    if (ss >> y) {
        cout << "Число Y успешно введено." << endl;
        return true;
    }
    return false;
}

// Функция для ввода числа Z
bool inputNumberZ(const string& input, double& z) {
    stringstream ss(input);
    if (ss >> z) {
        cout << "Число Z успешно введено." << endl;
        return true;
    }
    return false;
}

// Функция для вычисления суммы дробных частей 
double calculateFractionalSum(double x, double y, double z) {
    return (x - floor(x)) + (y - floor(y)) + (z - floor(z));
}

// Функция для вычисления суммы целых частей 
int calculateIntegerSum(double x, double y, double z) {
    return static_cast<int>(x) + static_cast<int>(y) + static_cast<int>(z);
}