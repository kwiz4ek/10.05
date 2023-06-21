#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int seconds;
    int secondsPerMinute = 60;
    int minutesPerHour = 60;
    int secondsPerHour = secondsPerMinute * minutesPerHour;
    int secondsPerDay = secondsPerHour * 24;

    std::cout << "Введіть час у секундах: ";
    std::cin >> seconds;

    int remainingSeconds = secondsPerDay - seconds;
    int hours = remainingSeconds / secondsPerHour;
    int minutes = (remainingSeconds % secondsPerHour) / secondsPerMinute;
    int remainingSecondsFinal = (remainingSeconds % secondsPerHour) % secondsPerMinute;

    std::cout << "Залишилося часу до півночі: " << hours << " годин, " << minutes << " хвилин, " << remainingSecondsFinal << " секунд." << std::endl;

    return 0;
}
