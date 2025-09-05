#include <stdio.h>
#define Money int
int multiply_data(int x, int y)
{
    Money z = x * y;
    return z;
}
int main(int argc, char *argv[])
{
    Money multi = multiply_data(5, 5);
    printf("%d\n", multi);
    return 0;
}