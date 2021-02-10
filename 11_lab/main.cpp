// Напишите прогамму, которая экспериментально определяет максимальное и
// минимальное значения, которые можно записать в переменную типа int. 

#include <iostream>

int main() {
    //Решение тут
    int number;
    for(number=1; number+1>number; ++number);
    std::cout<<"Max"<<number<<std::endl;
    for(number=1; number-1<number; --number);
    std::cout<<"Min"<<number<<std::endl;

    return 0;
}
