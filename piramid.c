
#include <stdio.h>
int main()

{
    int m, n;
    printf("Enter the no of rows");
    scanf("%d", &m);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("  ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}