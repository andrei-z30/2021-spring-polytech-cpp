
int binary_search(int array[], int size, int value) {
    int left = 0;
    int right = size - 1;
    int middle = (left + right) / 2;

    while (left < right && right != middle && left != middle) {
        int middle = (left + right) / 2;
        if (value == array[left])
            return left;
        if (value == array[right])
            return right;
        if (value == array[middle])
            return middle;
        if (value < array[middle])
            right = middle - 1;
        if (value > array[middle])
            left = middle + 1;
    }
    return -1;

}

int recursive_search(int array[], int &value, int &left, int &right) {
    int middle = (right + left) / 2;
    if (left >= right || right == middle || left == middle)
        return -1;
    if (value == array[left])
        return left;
    if (value == array[right])
        return right;
    if (value == array[middle])
        return middle;
    if (value < array[middle])
        return recursive_search(array, value, left, middle);
    if (value > array[middle])
        return recursive_search(array, value, middle, right);
    return -1;

}


int find(int array[], int size, int value, int command = false) {
    if (!command)
        return binary_search(array, size, value);
    else {
        int left = 0;
        int right = size - 1;
        return recursive_search(array, value, left, right);
    }
}