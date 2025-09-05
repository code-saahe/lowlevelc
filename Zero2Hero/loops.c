#include <stdio.h>
#define Length 10

int main()
{
    int arr[Length];
    int i = 0;
    int p = 0;
    while (i < Length)
    {
        arr[i] = i;
        i++;
    }
    for (int j = 0; j < Length; j++)
    {
        printf(" old array %d\n", arr[j]);
    }
    do
    {
        char *message = "new array %d\n";
        printf(message, arr[p]);
        p++;
    } while (p < Length);

    return 0;
}