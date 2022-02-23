#include <stdio.h>

int main()
{
    int user_input, value = 1;
    printf("Enter a number ");
    scanf("%d", &user_input);
    for (int i = 1; i <= user_input; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d \n", j, i, j * i);
        }
    }
    return 0;
}