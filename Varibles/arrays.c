#include <stdio.h>
#define MAX_NUM 51
int main()
{
    int bagNums[MAX_NUM];
    int len = sizeof(bagNums) / sizeof(size_t);
    for (int i = 0; i < len; i++)
    {
        bagNums[i] = i;
        printf("%d\n", bagNums[i]);
    }
    printf("%d\n", len);
    return 0;
}