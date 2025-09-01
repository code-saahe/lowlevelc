#include <stdio.h>
#define PI 3.14f
#undef PI
#define DEBUG

int main()
{
#ifdef DEBUG
    printf("we are in debugging mode\n");
#endif

    return 0;
}