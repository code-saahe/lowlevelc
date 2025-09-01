#include <stdio.h>
#define PI 3.14f
#define DEBUG

int main()
{
#ifdef DEBUG
#warning "peformance will be reduced"
    printf("we are in debugging mode\n");
#endif
#ifdef PI
    printf("%f", PI);
#endif

    return 0;
}