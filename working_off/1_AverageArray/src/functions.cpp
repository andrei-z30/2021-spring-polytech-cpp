#include "functions.h"

float averageArray(const int array[], int size) {
    float average = 0;
    for (int i = 0; i < size; ++i) {
        average += static_cast<float>(array[i]);
    }
    return average / static_cast<float>(size);
}