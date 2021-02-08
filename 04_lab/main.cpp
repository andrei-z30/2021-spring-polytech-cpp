#include <iostream>

// Составить программу, которая будет считывать введённое с клавиатуры целое число.
// После чего, каждую цифру этого числа необходимо вывести в новой строке.

int main() {
    std::cout << "Input number 5 char:" << std::endl;
    int num;
    std::cin >> num;
    while(num > 0){
        std::cout << num % 10 << std::endl;
        num /= 10;
    }
    return 0;
}
