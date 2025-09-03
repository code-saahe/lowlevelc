#include <stdio.h>
#define MAX_STR 3

void make_a_way(char *name)
{
    char *bake = name;
    printf("%s\n", bake);
};
void showOff(char *names[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%s\n", names[i]);
    }
    return;
};
__attribute__((__packed__)) struct Person // packed attributes
{
    char *name;
    int age;
    float money;
};
int main(int argc, char *argv[])
{
    struct Person person = {
        .name = "kon",
        .age = 25,
        .money = 25.87,
    };
    int myAge = person.age + 25;
    char *str = (char *)4214884;
    char *arr[MAX_STR];
    arr[0] = "konraw";
    arr[1] = "kon";
    arr[2] = "john";
    printf("%d\n", person.name);
    printf("%d\n", myAge);
    printf("%s\n", str);
    printf("%.2f\n", person.money);
    make_a_way(str);
    showOff(arr, MAX_STR);
    return 0;
}