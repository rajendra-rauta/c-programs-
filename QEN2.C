// WAP TO CHACK GREATEST NUMBEER

#include<stdio.h>

int main()
{
    int num1,num2;

printf("Enter your first number");
scanf("%d",num1);
printf("Enter your 2nd number ");
scanf("%d",&num2);

if (num1==num2)
{
    printf("both are equal");      
}
else if (num1> num2)
{
    printf(" %d  is greater  number ",num1);

}
else
{
printf("%d   is greater  number",num2);
}
return 0;
}