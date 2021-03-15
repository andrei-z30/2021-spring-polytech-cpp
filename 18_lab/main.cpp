// Напишите программу, используя технику TDD. Реализуйте калькулятор,
// поддерживающий операции: +, -, *, /. Проверьте тестами свойства операций
// и законы элементарной алгебры.
#include <iostream>
#include <cassert>

enum Command {
    Add,
    Sub,
    Mul,
    Div,
    Error
};

double calc(Command operation, double x, double y) {
    switch (operation) {
        case Command::Add:
            return x + y;
        case Command::Sub:
            return x - y;
        case Command::Mul:
            return x * y;
        case Command::Div:
            return (y) ? x / y : Command::Error;
        default:
            return Command::Error;
    }
}

int main() {
    assert(calc(Command::Add, 0.0, 0.0) == 0.0);
    assert(calc(Command::Sub, 0.0, 0.0) == 0.0);
    assert(calc(Command::Mul, 0.0, 0.0) == 0.0);

    // Коммутативность сложения
    assert(calc(Command::Add, 2.0, 1.0) == 3.0);
    assert(calc(Command::Add, 1.0, 2.0) == 3.0);
    // Продолжить

    // Коммутативность умножения
    assert(calc(Command::Mul, 3.0, 5.0) == 15.0);
    assert(calc(Command::Mul, 5.0, 3.0) == 15.0);
    // Другое
    assert(calc(Command::Add, 5.2, 3.1) == 8.3);
    assert(calc(Command::Add, -5.2, 3.1) == -2.1);

    assert(calc(Command::Sub, 6.7, 2.2) == 4.5);
    assert(calc(Command::Sub, 6.0, 12.0) == -6.0);

    assert(calc(Command::Mul, 5.0, -2.0) == -10.0);
    assert(calc(Command::Mul, -5.0, -2.0) == 10.0);

    assert(calc(Command::Div, 5.0, 2.0) == 2.5);
    assert(calc(Command::Div, 7.2, 2.4) == 3.0);
    assert(calc(Command::Div, 7.2, -2.4) == -3.0);
    assert(calc(Command::Div, -7.2, -2.4) == 3.0);
    assert(calc(Command::Div, 5.0, 0.0) == Command::Error);


    return 0;
}
