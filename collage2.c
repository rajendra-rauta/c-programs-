// QUESTION -WAP INPUT TWO NUMBER AND INTER CHANGE THE VALUE

#include<stdio.h>
void main()

{

    int a,b=0;

    printf("enter 1 st number ...:");
    scanf("%d",&a);

    printf("enter 2nd number ....:");
    scanf("%d",&b);


   a=a+b;
   b=a-b;
   a=a-b;

printf("after enter change the value the number is a=%d,b=%d",a,b);

}