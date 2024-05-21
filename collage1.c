#include <stdio.h>

int main()

{

    int a, b, sub, mult, div, sum;

    printf("Enter 1st number ....:");

    scanf("%d", &a);

    printf("enter the 2 nd number ...:");

    scanf("%d", &b);

    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;
    printf("sum of two number is %d +%d=%d\n", a, b, sum);

    printf("substract of two number %d-%d=%d\n",a,b,sub);

    printf("multplay of two numbers is %d*%d=%d\n", a, b, mult);

    printf("division of two numbers is %d/%d=%d\n", a, b, div);

    return 0;
    
}
