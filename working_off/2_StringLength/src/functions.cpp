#include "functions.h"

int lenStr(const char str[]) {
    if (str == nullptr)
        return -1;
    int i = 0;
    for (; str[i] != '\0'; i++);
    return i;
}