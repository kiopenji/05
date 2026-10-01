#include <stdio.h>

int main(void)
{
    int answer = 59;
    int input;
    int trials = 0;

    do
    {
        printf("Guess a number : ");
        scanf("%d", &input);
        trials++;

        if (input < answer)
        {
            printf("low!\n");
        }
        else if (input > answer)
        {
            printf("high!\n");
        }
    }
    while (input != answer);

    printf("Congratulation! trials: %d\n", trials);
    
    return 0;
}