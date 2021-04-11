#include "binary_search.h"

int find(int array[], int size, int key, bool mode) {
    if (mode)
        return recursivelySearch(array, size, key, 0, size - 1);
    else
        return continuouslySearch(array, size, key);
}

int recursivelySearch(const int array[], int size, int key, int left, int right) {
    if (left > right) return -1;
    int mid = (left + right) / 2;
    if (array[mid] != key) {
        if (key > array[mid])
            return recursivelySearch(array, size, key, mid + 1, right);
        else
            return recursivelySearch(array, size, key, left, mid - 1);
    } else {
        return mid;
    }
}

int continuouslySearch(const int array[], int size, int key) {
    int left = 0;
    int right = size - 1;
    int mid = 0;
    while (true) {
        if (left > right) return -1;
        mid = (left + right) / 2;
        if (key < array[mid])
            right = mid - 1;
        else if (key > array[mid])
            left = mid + 1;
        else
            return mid;
    }
}