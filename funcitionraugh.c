#include <stdio.h>
int add(int, int);     /*  [function declearation]*/

int main()
{
    int a, b;
    printf("Enter 2 numbers");
    scanf("%d%d", &a, &b);
    add(a,b);                 /*function call*/

   return 0;
}
int add(int x ,int y){                         /*function defination*/

int c;
c=x+y;
printf("the addition of two numbers is %d",c);
}