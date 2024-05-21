#include <stdio.h>
int main()
{
    int a, n, f = 1;

    printf("Enter the number which you cheack factorial");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("the factorial of the number is %d", f);
    return 0;
}


