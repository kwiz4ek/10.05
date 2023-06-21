#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const double PI = 3.14159;
    const double radius = 6371.0;  

    double surfaceArea = 4 * PI * radius * radius;

    std::cout << "Площа поверхні Землі: " << surfaceArea << " квадратних кілометрів" << std::endl;

    return 0;
}
