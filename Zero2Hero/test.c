#include <stdio.h>
#include <stdlib.h>

int resize_arr(int **arr, size_t len)
{
    int *temp = realloc(*arr, len * sizeof(int));
    if (temp == NULL)
    {
        printf("could not allacate memory");
        *arr = NULL;
        return -1;
    }
    *arr = temp;
    return 0;
}
int main()
{
    size_t my_size = 5;
    size_t my_new_size = 10;
    int *ars = malloc(my_size * sizeof(int));
    printf("%ld\n", (my_size * sizeof(size_t)) / sizeof(size_t)); // lenght of arrays formula
    for (size_t i = 0; i < my_size; i++)
    {
        ars[i] = i;
        printf("%d\n", ars[i]);
    }
    if (-1 == resize_arr(&ars, my_new_size))
    {
        printf("uh -oh");
        return -1;
    }
    for (size_t i = my_size; i < my_new_size; i++)
    {
        ars[i] = i;
        printf("%d\n", ars[i]);
    }
    free(ars);
    ars = NULL;
    return 0;
}