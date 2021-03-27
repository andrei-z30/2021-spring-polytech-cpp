#include "functions.h"

// Реализации функций тут
int find_number(int array[], int size, int number) {
    for (int i = 0; i < size; ++i)
        if (array[i] == number)
            return i + 1;
    return 0;
}