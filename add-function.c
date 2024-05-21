#include<stdio.h>
int myfunction(int ,int);

int main()
{ 
    int a,b;
printf("Enter the first number");
scanf("%d" ,&a);
printf("Enter your 2nd number");
scanf("%d",&b);

int result = myfunction(a,b);

printf("sum of two number is %d" ,result);
return 0;
}



int myfunction(int x,int y){
return x+y;
}