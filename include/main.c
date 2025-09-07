#include <stdio.h>
#include "history.h"

int main()
{
    int jump = make_history(50, 60);
    char *hype = bank_roll();
    printf("%d\n%s\n", jump, hype);
    return 0;
}