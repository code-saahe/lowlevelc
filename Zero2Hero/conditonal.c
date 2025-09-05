#include <stdio.h>
void getWheather()
{
    int temp;
    char *tempMessage = "whats the wheather today";
    printf("%s\n", tempMessage);
    scanf("%d", &temp);
    if (temp > 60)
    {
        printf("its hot out and its %d degrees\n", temp);
        return;
    }
    else if (temp < 60 && temp > 49)
    {
        char *message = "its starting to get very cold out";
        printf("%s its %d degrees out\n", message, temp);
        return;
    }
    else
    {
        char *mesage = "its freezing out";
        printf("%s its %d degrees out\n", mesage, temp);
        return;
    }
}
void questions()
{
    int x = 0;
    scanf("%d", &x);
    if (x == 42)
    {
        printf("this is the right answer\n");
        return;
    }
    else if (x == 24)
    {
        printf("this is not a good answer\n");
        return;
    }
    else
    {
        printf("you have the wrong answer\n");
        return;
    }
}
int main()
{
    questions();
    getWheather();

    return 0;
}