#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "hellow world";
    char *peep = "hello kon";
    char hexer[] = {0x65, 0x68, 0x65, 0x68, 0x00};
    int len = sizeof(name) / sizeof(name[0]);
    printf("%s\n%s\n%d\n%s\n", name, peep, len, hexer);
    return 0;
}