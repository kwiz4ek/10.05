#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int totalStudents;
    int debtors;

    std::cout << "Введіть загальну кількість студентів: ";
    std::cin >> totalStudents;

    std::cout << "Введіть кількість боржників: ";
    std::cin >> debtors;

    float percentDebtors = 100.0f * debtors / totalStudents;

    std::cout << "Відсоток боржників: " << percentDebtors << "%" << std::endl;

    return 0;
}
