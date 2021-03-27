#include <climits>
#include "functions.h"

// Реализации функций тут
int find_max(int array[],int size){
    int max=INT_MIN;
    for(int cnt=0;cnt<size;++cnt)
        max=(max>array[cnt]?max:array[cnt]);
    return max;
}

int find_min(int array[],int size) {
    int min = INT_MAX;
    for (int cnt = 0; cnt<size;++cnt)
        min = (min < array[cnt] ? min : array[cnt]);
    return min;
}

int cnt_number(int array[], int size,int number){
    int cnt=0;
    for(int i=0;i<size;++i)
        cnt+=(array[i]==number? 1:0);
                return cnt;
}

void generate(int array[], int size,int  from_number)
{
    for(int i = 0; i<size; ++i)
        array[i] = i+from_number;

}