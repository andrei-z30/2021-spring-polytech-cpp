// Вывести представление целого десятичного числа N в системе счисления с основанием M. M и N вводятся пользователем с клавиатуры.
// Для примера посмотрите задачу 14

#include <iostream>

void ConvertToNewBase(int num, int base);

int main() {
    int num{0}, base{0};
    std::cout << "Number:";
    std::cin >> num;
    std::cout << "Base:";
    std::cin >> base;

    ConvertToNewBase(num, base);

    return 0;
}

void ConvertToNewBase(int num, int base) {
    while (num != 0) {
        int bit = num % base;
        num = num / base;
        if (bit > 9)
            bit += 55;
        else
            bit += 48;
        std::cout << char(bit);
    }
}