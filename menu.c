//  Write a program to using switch case that read 4 nos .and display a menu thatoffers 4 options calculate total,
// calculate average,display the smallest ,and largestnumber.

#include <stdio.h>
int main()
{
    double num1, num2, num3, num4;
    double total, average;

    printf("Enter 4 numbers  :");
    scanf("%lf%lf%lf%lf", &num1, &num2, &num3, &num4);

    int choice;
    printf("menu\n");
    printf("1.calculate total\n");
    printf("2.calculate average\n");
    printf("3.display the smallest number\n ");
    printf("4.display the largest nymber ");
    printf("Enter your choice(1-4)");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        total = num1 + num2 + num3 + num4;
        printf("TOtal=%.2lf", total);
        break;
    case 2:
        average = (num1 + num2 + num3 + num4) / 4.0;
        printf("Average=%.2lf", average);
        break;
    case 3:
        if

            (num1 <= num2 && num1 <= num3 && num1 <= num4)
        {

            printf("The Smallest number is %.2lf\n", num1);
        }
        else if

            (num2 <= num1 && num2 <= num3 && num2 <= num4)
        {

            printf("The smallest number is %.2lf\n", num2);
        }
        else if (num3 <= num1 && num3 <= num2 && num3 <= num4)
        {
            printf("The smallest number is %.2lf", num3);
        
        }
        else
        {
            printf("The smallest number is %.2lf", num4);
        }
        break;
    case 4:
        if (num1 >= num2 && num1 >= num3 && num1 >= num4)
        {
            printf("The largest number is %.2lf", num1);
        }
        else if (num2 >= num1 && num2 >= num3 && num2 >= num4)
        {
            printf("The largest number is %.2lf", num2);
        }
        else if (num3 >= num1 && num3 >= num2 && num3 >= num4)
        {
            printf("The largest number is %.2lf", num3);
        }
        else
        {
            printf("The largest number is %.2lf", num4);
            break;
        }
    default:
        printf("invalid choice, please select a valid option(1-4)\n");
    }

    return 0;
}