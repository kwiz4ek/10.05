#include <iostream>
#include <cmath>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double fileSizeGB;
    double internetSpeedMbps;

    std::cout << "Введіть розмір файлу в гігабайтах: ";
    std::cin >> fileSizeGB;

    std::cout << "Введіть швидкість інтернет-з'єднання в мегабітах за секунду: ";
    std::cin >> internetSpeedMbps;

    double fileSizeMb = fileSizeGB * 1024;

    double downloadTimeSec = fileSizeMb / internetSpeedMbps;

    int hours = downloadTimeSec / 3600;
    int minutes = (downloadTimeSec - (hours * 3600)) / 60;
    int seconds = downloadTimeSec - (hours * 3600) - (minutes * 60);

    std::cout << "Час скачування: " << hours << " годин, " << minutes << " хвилин, " << seconds << " секунд." << std::endl;

    return 0;
}
