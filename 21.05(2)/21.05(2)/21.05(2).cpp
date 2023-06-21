#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int flashDriveSizeGB;
    int filmSizeMB = 760;

    std::cout << "Введіть обсяг флешки у гігабайтах: ";
    std::cin >> flashDriveSizeGB;

    int numFilms = flashDriveSizeGB * 1024 / filmSizeMB;

    std::cout << "На флешку об'ємом " << flashDriveSizeGB << " ГБ поміститься " << numFilms << "  " << filmSizeMB << " МБ." << std::endl;

    return 0;
}
