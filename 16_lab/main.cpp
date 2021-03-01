// Допишите программу, которая вычисляет расстояние Хэмминга бинарных представлений двух целых положительных чисел. 

#include <iostream>

int hamming(int num_1, int num_2) {
    int cnt = 0;
    while (num_1 > 0 || num_2 > 0) {
        if ((num_1 % 2) != (num_2 % 2))
            cnt++;
        num_1 /= 2;
        num_2 /= 2;
    }
    return cnt;

}

int main() {
    std::cout << hamming(7, 3) << std::endl;
    return 0;
}
