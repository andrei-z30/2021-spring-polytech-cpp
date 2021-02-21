// Вывести представление целого десятичного числа N в системе счисления с основанием M. M и N вводятся пользователем с клавиатуры.
// Для примера посмотрите задачу 14

#include <iostream>

int main() {
    // Решение тут
    int number, base, extent = 1, sum = 0;
    std::cout << "Enter number:";
    std::cin >> number;
    std::cout << "Enter base: ";
    std::cin >> base;
    while (number > 0) {
        sum += extent * (number % 10);
        extent *= base;
        number /= 10;
    }
    std::cout << sum;
    return 0;
}
