#include <stdio.h>
int isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        return 1;
    }
}
int main()
{
    int n1, n2;
    printf("Enter 1st number\n");
    scanf("%d", &n1);
    printf("Enter 2nd number \n");
    scanf("%d", &n2);
    printf("The prime number between %d and %d \are ", n1, n2);

    for (int i = n1; i <= n2; i++)
    {
        if (isprime(i))

        {
            printf("%d,", i);
        }
    }

    return 0;
}