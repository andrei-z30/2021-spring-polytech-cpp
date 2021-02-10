// Допишите программу, которая печатает абсолютное значение числа, введённого 
// с клавиатуры пользователем.

#include <iostream>

int absolute_value(int number){
    if(number<0)
        return -number;
    return number;
}
int main() {
    int x;
    std::cin>> x;
    std::cout << absolute_value(x) << std::endl;
}
