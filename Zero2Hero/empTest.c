#include <stdio.h>
#include <string.h>
#define MAX_HIRE 3

struct person
{
    int id;
    char name[64];
    float wallet;
};

void add_employee(struct person per[], int len, char *empName, float money)
{
    for (int i = 0; i < len; i++)
    {
        if (per[i].id == 0)
        {
            per[i].id = i + 1;
            strncpy(per[i].name, empName, sizeof(per[i].name) - 1);
            per[i].name[sizeof(per[i].name) - 1] = '\0';
            per[i].wallet = money;
            break;
        }
    }
};

int main(int argc, char *argv[])
{
    struct person employees[3] = {0};
    add_employee(employees, MAX_HIRE, "kon", 24.99);
    add_employee(employees, MAX_HIRE, "rob", 100.99);
    add_employee(employees, MAX_HIRE, "jack", 50.60);
    for (int i = 0; i < MAX_HIRE; i++)
    {
        printf("%d\n%s\n%.2f\n", employees[i].id, employees[i].name, employees[i].wallet);
    }

    return 0;
}