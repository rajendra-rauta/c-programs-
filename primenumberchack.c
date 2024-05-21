#include <stdio.h>
int main()
{
    int a, b, s=0;
    printf("Enter the  number which you chack ");
    scanf("%d", &a);
    for (b = 2; b < a; b++)
    {
        if (a % b == 0)
        {
            s = s + 1;
        }
    }
    if (s == 0)
    {
        printf("it is prime number ");
    }
    else
    {
        printf("it is not a prime number ");
    }
}
