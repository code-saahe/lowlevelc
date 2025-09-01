#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "hellow world";
    char *peep = "hello kon";
    int len = sizeof(name) / sizeof(name[0]);
    printf("%s\n%s\n%d\n", name, peep, len);
    return 0;
}