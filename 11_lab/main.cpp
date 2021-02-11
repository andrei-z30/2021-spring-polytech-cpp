// Напишите прогамму, которая экспериментально определяет максимальное и
// минимальное значения, которые можно записать в переменную типа int. 

#include <iostream>

void MaxAndMinValueOfInt_var1();
void MaxAndMinValueOfInt_var2();

int main() {
    MaxAndMinValueOfInt_var1();
    MaxAndMinValueOfInt_var2();
}

int RunOfValue(int dir) {
    int num = 0;
    if (dir)
        while (num + 1 > num)
            num++;
    else
        while (num - 1 < num)
            num--;
    return num;
}

void MaxAndMinValueOfInt_var1() {
    std::cout << "Variant 1" << std::endl;
    int num_max = RunOfValue(1);
    int num_min = RunOfValue(-1);
    std::cout << "min: " << num_min << std::endl << "max: " << num_max << std::endl;
}

void MaxAndMinValueOfInt_var2() {
    std::cout << "Variant 2" << std::endl;
    int num = 1;
    while (num < num * 2) {
        num *= 2;
    }
    while (num < num + 1) {
        num += 1;
    }
    int num_max = num;
    int num_min = 0;
    if (num_min > num_min - 1){
        num = -1;
        while (num > num * 2) {
            num *= 2;
        }
        while (num > num - 1) {
            num -= 1;
        }
        num_min = num;
    }
    std::cout << "min: " << num_min << std::endl << "max: " << num_max << std::endl;
}