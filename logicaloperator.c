#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter your first number which you check ");
    scanf("%d", &a);
    printf("Enter your 2nd number whic you check ");
    scanf("%d", &b);

    // LOGICAL OPERATORAS
    printf("logical operator \n");
    printf("a && b=%d\n", a && b);
    printf("a || b=%d\n", a || b);
    printf("!a=%d\n", !a);

    // BITWISE OPERSTORS

    printf("BITWISE OPERATOR \n");
    printf("a & b=%d\n", a & b);
    printf("a | b=%d\n", a | b);
    printf("a ^ b=%d\n", a ^ b);
    printf("-a=%d\n", -a);

    // UNARY OPERATOR

    printf("unary operator\n");
    printf("-a=%d\n", -a);
    printf("++a=%d\n", ++a);
    printf("--a=%d\n", --a);
    printf("+a=%d\n", +a);

    // BINARY OPERATOR

    printf("binary operator\n ");
    printf("a+b=%d\n", a + b);
    printf("a-b=%d\n", a - b);
    printf("a*b=%d\n", a * b);
    printf("a/b=%d\n", a / b);

    // TERNARY OPERATORS

    printf("TERNARY OPERATOR\n ");
    printf("a>b?a:b=%d", a > b ? a : b);

    return 0;
}
