
#include <stdio.h>
void main()
{
    int storage[3][3], i, j;

    printf("enter 9 digit integer to 2d array \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &storage[i][j]);
        }
    }
    printf("the array element are\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", storage[i][j]);
        }
        printf("\n");
    }
}