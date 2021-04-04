#include "functions.h"

int lenStr(char str[]) {
    int i = 0;
    for (; str[i] != '\0'; i++);
    return i;
}