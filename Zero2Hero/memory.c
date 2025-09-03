#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("memory alloctaion faild\n");
        return 1;
    }
    *ptr = 42;
    printf("This is the allocated pointer value: %d\n here is its address: %p\\n", *ptr, (void *)ptr);
    free(ptr);
    return 0;
}