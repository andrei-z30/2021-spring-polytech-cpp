// Напишите прогамму, которая экспериментально определяет максимальное и
// минимальное значения, которые можно записать в переменную типа int. 

#include <iostream>

int main() {
    //Решение тут
    int number=1;
    while(number+1>1)
        number*=2;
    std::cout<<"Minimum:"<<number<<std::endl<<"Maximum:"<<number-1;
    return 0;
}
