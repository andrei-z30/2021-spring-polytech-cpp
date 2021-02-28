// Вывести представление целого десятичного числа N в системе счисления с основанием M. M и N вводятся пользователем с клавиатуры.
// Для примера посмотрите задачу 14

#include <iostream>

int degree(int num) {
    int extent = 1;
    while (num) {
        extent *= 10;
        num -= 1;
    }
    return extent;
}

int main() {
    // Решение тут
    int number, base, sum = 0, i = 0;
    std::cout << "Enter number:";
    std::cin >> number;
    std::cout << "Enter base: ";
    std::cin >> base;
    while (number > 0) {
        sum += degree(i) * (number % base);

        if (number % base > 9)
            i += 2;
        else
            i += 1;
        number /= base;
    }
    std::cout << sum;
    return 0;
}
