#include <iostream>
#include <cmath>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float number;

    std::cout << "Введіть дрібне число: ";
    std::cin >> number;

    float roundedNumber = round(number * 100) / 100;

    std::cout << "Округлене число: " << roundedNumber << std::endl;

    return 0;
}
