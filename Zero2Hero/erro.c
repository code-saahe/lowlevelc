#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    // libarys to print errors
    // int fd = open("./file-that-doesnt-exist", O_RDONLY);
    // printf("test\n");
    // if (fd == -1)
    // {
    //     perror("open");
    //     return -1;
    // }
    // close(fd);
    int fx = open("help.txt", O_RDWR | O_CREAT, 0644);
    if (fx == -1)
    {
        perror("open\n");
        return -1;
    }
    char *json = "hello\n";
    write(fx, json, strlen(json));
    char *stuff = read(fx, &json, sizeof(json));
    printf("%s", json);
    close(fx);
    return 0;
}