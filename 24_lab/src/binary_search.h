#ifndef INC_24_LAB_BINARY_SEARCH_H
#define INC_24_LAB_BINARY_SEARCH_H

int find(int array[], int size, int key, bool mode = false);

int recursivelySearch(const int array[], int size, int key, int left, int right);

int continuouslySearch(const int array[], int size, int key);

#endif //INC_24_LAB_BINARY_SEARCH_H
