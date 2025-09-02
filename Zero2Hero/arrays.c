#include <stdio.h>
#include "tester.h"
#define MAX_NUM 51
int main()
{
    int bagNums[MAX_NUM];
    int len = sizeof(bagNums) / sizeof(bagNums[0]);
    fillArray(bagNums, len);
    return 0;
}