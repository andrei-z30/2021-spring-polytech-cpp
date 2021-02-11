// Допишите программу, которая печатает абсолютное значение числа, введённого 
// с клавиатуры пользователем.

#include <iostream>

int absolute_value(int num);

int main() {
    int x;
    std::cin >> x;
    std::cout << absolute_value(x) << std::endl;
}

int absolute_value(int num) {
    if (0 > num)
        num *= -1;
    return num;
}