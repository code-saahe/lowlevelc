#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    STATUS_GOOD,
    STATUS_BAD,
} status_t;

status_t foo(int **arr, size_t new_size)
{
    int *temp = realloc(*arr, new_size * sizeof(int));
    if (temp == NULL)
    {
        printf("could not reallacate memory\n");
        *arr = NULL;
        return STATUS_BAD;
    }
    *arr = temp;
    return STATUS_GOOD;
}

int main()
{
    size_t inialize_array = 5;
    size_t resize_array = 10;
    int *ar = malloc(inialize_array * sizeof(int));
    if (ar == NULL)
    {
        printf("memory allaction failed\n");
        return 1;
    }

    for (size_t i = 0; i < inialize_array; i++)
    {
        ar[i] = i;
        printf("%d\n", ar[i]);
    }

    if (STATUS_BAD == foo(&ar, resize_array))
    {
        printf("uh-oh");
        return 1;
    }

    for (size_t i = inialize_array; i < resize_array; i++)
    {
        ar[i] = i;
        printf("%d\n", ar[i]);
    }
    free(ar);
    ar = NULL;

    return 0;
}