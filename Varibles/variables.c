#include <stdio.h>

int g_NumPersons = 0;

int main()
{
    int personID = 0;
    int person2ID = personID + 1;
    g_NumPersons = person2ID + 50;
    {
        printf("hello world\n%d\n%d\n%d", personID, person2ID, g_NumPersons);
    }
    return 0;
}