#include "binary_search.h"

int find(int *array, int size, int key, bool parameter) {
    if (parameter == false) {
        return binary_search(array, size, key);
    } else {
        return recursive_binary_search(array, size, key, 0, size - 1);
    }
}

int recursive_binary_search(int *array, int size, int key, int left_border, int right_border) {
    int middle;
    if (size != 0) {
        middle = (left_border + right_border) / 2;
        if (array[middle] == key) {
            return middle;
        }
        if (key < array[middle]) {
            right_border = middle - 1;
            recursive_binary_search(array, size, key, left_border, right_border);
        } else {
            left_border = middle + 1;
            recursive_binary_search(array, size, key, left_border, right_border);
        }
    } else {
        return -1;
    }
}

int binary_search(int *array, int size, int key) {
    int left_border = 0;
    int right_border = size - 1;
    int middle;
    if (size != 0) {
        bool pause = true;
        while (pause) {
            middle = (right_border + left_border) / 2;
            if (array[middle] == key) {
                return middle;
                pause = false;
            } else if (left_border != right_border) {
                if (key < array[middle]) {
                    right_border = middle - 1;
                } else {
                    left_border = middle + 1;
                }
            }
        }
    } else {
        return -1;
    }
}