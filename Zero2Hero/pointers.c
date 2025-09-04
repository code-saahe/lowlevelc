#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct employee_t
{
    int id;
    bool isActive;
    float hourlyWage;
};
void inialize_employee(struct employee_t *e)
{
    static int trackingNumber = 0;
    e->id = 0;
    e->isActive = true;
    e->hourlyWage = 25.00;
    trackingNumber++;
    printf("Number of employees created: %d\n", trackingNumber);
}
void get_employee_intfo(struct employee_t *e)
{
    printf("id:%d\nis Active: %s\nhourly Wage: %.2f\n", e->id, e->isActive ? "true" : "fales", e->hourlyWage);
}
int tracker()
{
    static int tracker = 0;
    tracker++;
    printf("tracking number: %d\n", tracker);
    return tracker;
}

int main()
{
    int x = 50;
    int *ptr = &x;
    *ptr = 20;
    int z = 4;
    tracker();
    struct employee_t *employee = malloc(sizeof(struct employee_t) * z);
    inialize_employee(&employee[0]);
    inialize_employee(&employee[1]);
    inialize_employee(&employee[2]);
    inialize_employee(&employee[3]);
    printf("%d\n", *ptr);
    printf("%p\n", ptr);
    tracker();
    get_employee_intfo(&employee[0]);
    get_employee_intfo(&employee[1]);
    get_employee_intfo(&employee[2]);
    get_employee_intfo(&employee[3]);
    free(employee);
    employee = NULL;
    tracker();
    return 0;
}