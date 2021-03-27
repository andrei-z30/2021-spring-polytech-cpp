#include "functions.h"

int maxValueArray(int array[], int size) {
    int maxNum = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > maxNum)
            maxNum = array[i];
    }
    return maxNum;
}

int minValueArray(int array[], int size) {
    int minNum = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < minNum)
            minNum = array[i];
    }
    return minNum;
}

int countValueArray(int array[], int size, int compValue) {
    int counter = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] == compValue)
            counter++;
    }
    return counter;
}