#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int faile = open("make.txt", O_RDWR | O_CREAT, 0644);
    if (faile == -1)
    {
        perror("open");
        return -1;
    }
    printf("so far ok\n");
    char *text = "this is a test to make changes\nand thank you for the help regaurds";
    if (-1 == write(faile, text, strlen(text)))
    {
        perror("write");
        return -1;
    }
    close(faile);

    return 0;
}