#include <stdio.h>
#define PI 3.14f
#define DEBUG

int main()
{
    float money = PI + 20.64;
#ifdef DEBUG
#warning "peformance will be reduced"
    printf("we are in debugging mode\n");
#endif
#ifdef PI
    printf("%.2f\n", PI);
    printf("%.2f\n", money);
#endif

    return 0;
}