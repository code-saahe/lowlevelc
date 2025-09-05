#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    // libarys to print errors
    int fd = open("./file-that-doesnt-exist", O_RDONLY);
    printf("test\n");
    if (fd == -1)
    {
        perror("open");
        return -1;
    }

    return 0;
}