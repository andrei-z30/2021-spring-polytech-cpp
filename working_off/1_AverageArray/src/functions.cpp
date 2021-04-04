#include "functions.h"

int averageArray(int array[], int size) {
    int average = 0;
    for (int i = 0; i < size; ++i) {
        average += array[i];
    }
    return average/size;
}