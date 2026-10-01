#include <stdio.h>

int main(void)
{
    int num;

    printf("input a integer :");
    scanf("%i", &num);

    if (num > 0)
    {
        printf("positive!\n");
    }
    else if (num == 0)
    {
        printf("zero!\n");
    }
    else
    {
        printf("negative!\n");
    }

    return 0;
}