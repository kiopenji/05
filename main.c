#include <stdio.h>

int main(void)
{
    int num1, num2;
    char op;

    printf("enter the calculation : ");
    scanf("%d %c %d", &num1, &op, &num2);

    if (op == '+')
    {
        printf("= %d\n", num1 + num2);
    }
    else if (op == '-')
    {
        printf("= %d\n", num1 - num2);
    }
    else if (op == '*')
    {
        printf("= %d\n", num1 * num2);
    }
    else if (op == '/')
    {
        printf("= %d\n", num1 / num2);
    }

    return 0;
}