// Напишите функцию, которая заполняет массив случайными
// целыми числами из диапазона от 0 до n. Воспользуйтесь функциями
// std::rand() и std::srand().
#include<time.h>
#include <cstdlib>
#include <iostream>

void filing_array(int array[], int size, int max_num) {
    for (int i = 0; i < size; ++i)
        array[i] = std::rand() % (max_num + 1);
}

int main() {
    std::srand(time(NULL));
    int max_num = 1;
    int array[20];
    std::cout << "Enter maximum number:";
    std::cin >> max_num;
    filing_array(array, 20, max_num);

    for (int cnt = 0; cnt < 20; ++cnt)
        std::cout << array[cnt] << " ";


    return 0;
}
