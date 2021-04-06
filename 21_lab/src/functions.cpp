#include "functions.h"

int min_value_in_array (int array[], int size) {
    int min_value = 0, c;
    for (int i = 1; i <= size - 1; i++) {
        if (array[i] < array[i - 1]) {
            min_value = array[i];
        } else {
            c = array[i];
            array[i] = array[i - 1];
            array[i - 1] = c;
            min_value = array[i];
        }
    }
    return min_value;
}