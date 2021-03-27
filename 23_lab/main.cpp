// Напишите функцию, которая заполняет массив случайными
// целыми числами из диапазона от 0 до n. Воспользуйтесь функциями
// std::rand() и std::srand().

#include <iostream>
#include <cstdlib>
#include <ctime>

void generateRndArray(int array[], int size, int maxValue) {
    for (int i = 0; i < size; ++i) {
        array[i] = std::rand() % maxValue;
    }
}

int main() {
    std::srand(std::time(nullptr));
    int maxValue = 6;
    int array[10] = {0};
    generateRndArray(array, 10, maxValue);
    for (int i : array) {
        std::cout << i << " ";
    }
    return 0;
}