#include <stdio.h>
int main()
{
    int a, b, k, r = 0;
    printf("Enter  a number "); 
    scanf("%d", &a);

    k = a;
    while (a > 0)
    {
        b = a % 10;
        r = r * 10 + b;
        a = a / 10;
    }

    if (k == r)
    {
        printf("the number is pollindric");
    }
    else
    {
        printf("it is not polli ndric");
    }

    return 0;
}
