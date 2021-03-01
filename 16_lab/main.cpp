// Допишите программу, которая вычисляет расстояние Хэмминга бинарных представлений двух целых положительных чисел. 

#include <iostream>

int hamming(int num1, int num2);

int main() {
    std::cout << hamming(7, 3) << std::endl;
    return 0;
}

int hamming(int num1, int num2) {
    int hamDist{0};
    while (num1 != 0 | num2 != 0) {
        int bit1 = num1 % 2;
        num1 = num1 / 2;
        int bit2 = num2 % 2;
        num2 = num2 / 2;
        if (bit1 != bit2)
            hamDist++;
    }
    return hamDist;
}
