#include <stdio.h>

int main(void)
{
    int num;

    printf("input a integer :");
    scanf("%i", &num);

    if (num < 0)
        printf("absolute value: %d\n", -num);
    else
        printf("absolute value: %d\n", num);

    return 0;
}