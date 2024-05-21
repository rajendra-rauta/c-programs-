//Q- value swip without using third value 
#include <stdio.h>
int a, b, x;

int main()

{
    printf("enter 1 st number ....:");

    scanf("%d", &a);
    printf("enter 2nd number ...:");
    scanf("%d", &b);

    a = a + b;        //let-a=10,b=5
    b = a - b;        //a=10+5=15,
    a = a - b;       // b=15-5=10,
                     // a=15-10=5


    printf("swip value is ..:%d ,%d", a, b);

    return 0;
}
