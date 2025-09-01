#include <stdio.h>

int main()
{
    char name[] = "im glad to be learning C";
    int x = 10;
    char *ptr = (char *)&x;
    printf("hello world\n%s\n%c", name, &ptr);
    return 0;
}