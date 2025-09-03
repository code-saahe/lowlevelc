#include <stdio.h>

union Grade
{
    int numberGrade;
    char letterGrade;
};
int main(int argc, char *argv[])
{

    union Grade myStudent = {
        .letterGrade = 'A',
    };
    printf("my grade is an %c\n", myStudent.letterGrade);

    return 0;
}