// Вывести представление целого десятичного числа N в системе счисления с основанием M. M и N вводятся пользователем с клавиатуры.
// Для примера посмотрите задачу 14

#include <iostream>

void Output_Number(int sum, int output_number, int cnt) {
    while (cnt-- > 0) {
        if (output_number % 10 == 2) {
            std::cout << char(sum % 100 + 55);
            sum /= 100;
        } else {
            std::cout << char(sum % 10 + 48);
            sum /= 10;
        }
        output_number /= 10;


    }
}

int main() {
    // Решение тут
    int number, base, sum = 0, output_number = 0, cnt = 0;
    std::cout << "Enter number:";
    std::cin >> number;
    std::cout << "Enter base: ";
    std::cin >> base;
    while (number > 0) {
        sum += (number % base);
        if ((number / base) % base > 9)
            sum *= 100;
        else
            sum *= 10;
        cnt++;
        if (number % base > 9)
            output_number += 2;
        else
            output_number += 1;
        output_number *= 10;
        number /= base;
    }
    sum /= 10;
    output_number /= 10;
    Output_Number(sum, output_number, cnt);

    return 0;
}
