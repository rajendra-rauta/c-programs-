#include<stdio.h>
int main()
{
    float input,hra ,ta,da,salary;
    printf("Enter your basic pay:");
    scanf("%f",&input);
    hra=input*1/100;
    ta=input*7/100;
    da=input*37/100;
    salary=input+hra+ta+da;
    printf("your salary is %f",salary);

    return 0;
}