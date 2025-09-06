#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

struct database_header
{
    unsigned short version;
    unsigned short employees;
    unsigned int filelenght;
};
int main()
{
    struct database_header head = {0};
    struct stat dbstat = {0};
    char buffer[1024];
    char *fileName = "make.txt";
    int fx = open(fileName, O_RDONLY, 0644);
    if (-1 == fx)
    {
        perror("open");
        close(fx);
        return -1;
    }
    int getRead = read(fx, buffer, sizeof(buffer));
    if (getRead == -1 || getRead == EOF)
    {
        perror("read");
        close(fx);
        return -1;
    }
    if (!EOF)
    {
        printf("there is more to read\n");
        return -1;
    }
    printf("%s\n", buffer);
    int fh = open("./my-db.db", O_RDONLY);
    if (fh == -1)
    {
        perror("open");
        close(fh);
        return -1;
    }
    int sqlRead = read(fh, &head, sizeof(head));
    fstat(fh, &dbstat);
    if (head.filelenght != dbstat.st_size || sqlRead == -1)
    {
        perror("read");
        close(fh);
        printf("by hacker\n");
        return -2;
    }
    printf("%d\n%d\n%d\n stat: %d\n", head.version, head.employees, head.filelenght, dbstat.st_size);
    close(fh);
    close(fx);
    return 0;
}