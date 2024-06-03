#include <stdio.h>

int fact(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return (number * fact(number - 1));
    }
}
int main()
{
    int num;
    printf("Enter the number which you cheack factorial\n");
    scanf("%d", &num);
    printf("the factorial of %d and %d\n", num, fact(num));
    return 0;
}
