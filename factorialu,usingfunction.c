#include <stdio.h>
int fact(int);
int main()
{
    int i, n;
    printf("Entyer the number which you cheack");
    scanf("%d", &n);
    fact(n);
    return 0;
}

int fact(int a)

{
    int f = 1;
    for (int i = 1; i <= a; i++)
    {
        f = f * i;
    }
    printf("the factorial of your number is %d", f);
    return 0;
}