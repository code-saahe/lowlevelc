#include <stdio.h>

int main()
{
    int personID = 0;
    int person2ID = personID + 1;
    {
        printf("hello world\n%d\n%d", personID, person2ID);
    }
    return 0;
}