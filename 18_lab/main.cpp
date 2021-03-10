// Напишите программу, используя технику TDD. Реализуйте калькулятор,
// поддерживающий операции: +, -, *, /. Проверьте тестами свойства операций
// и законы элементарной алгебры.
#include <iostream>
#include <cassert>

double calc(char operation, double x, double y) {
    // Решение здесь
    switch (operation) {
        case '+':
            return (x + y);
        case '-':
            return (x - y);
        case '*':
            return (x * y);
        case '/':
            return (x / y);
        default:
            return false;

    }
}

int main() {
    char command;
    int Num_1 = 0, Num_2 = 0;
    std::cout << "Enter Number 1:";
    std::cin >> Num_1;
    std::cout << "Enter operation:";
    std::cin >> command;
    std::cout << "Enter Number 2:";
    std::cin >> Num_2;
    if (Num_2 == 0) {
        std::cout << "Division by zero is not allowed!";
        return 0;
    }
    std::cout << calc(command, Num_1, Num_2);

    assert(calc('+', 0.0, 0.0) == 0.0);
    assert(calc('-', 0.0, 0.0) == 0.0);
    assert(calc('*', 0.0, 0.0) == 0.0);
    assert(calc('/', 0.0, 0.0) == false);

    // Коммутативность сложения
    assert(calc('+', 2.0, 1.0) == 3.0);
    assert(calc('+', 1.0, 2.0) == 3.0);
    assert(calc('+', -3.0, -9.0) == -12.0);

    assert(calc('-', 7.0, 7.0) == 0.0);
    assert(calc('-', 1.0, 12.0) == -11.0);

    assert(calc('*', 5.0, 6.0) == 30.0);
    assert(calc('*', 6.0, 5.0) == 30.0);
    assert(calc('*', 10.0, 0.2) == 2.0);
    assert(calc('*', 6.0, -6.0) == -36.0);

    assert(calc('/', 10.0, 2.0) == 5.0);
    assert(calc('/', 2.0, 10.0) == 0.5);
    assert(calc('/', -5.0, 5.0) == -1.0);
    assert(calc('/', -8.0, -4.0) == 2.0);
    // Продолжить

    return 0;
}