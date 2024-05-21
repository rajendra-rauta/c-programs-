// WAP TO TEST THE ARITHEMITIC OPERATOR
#include <stdio.h>
int main()
{
    int a, b, sum, sub, mult, div, mud, num1, num2, num;
    printf("Enter 1 st number .....");
    scanf("%d", &a);
    printf("Enter 2nd number ....:");
    scanf("%d", &b);

    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;
    num = a % b;

    printf("sum of two number is %d +%d=%d\n", a, b, sum);

    printf("substract of two number %d-%d=%d\n", a, b, sub);

    printf("multplay of two numbers is %d*%d=%d\n", a, b, mult);

    printf("division of two numbers is %d/%d=%d\n", a, b, div);
    printf("mud of two number is =%d", num);

    return 0;
}