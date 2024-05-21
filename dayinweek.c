// Write a program to enter a number from 1-7 and display the corresponding day of the week using 
// switch case statement.

#include <stdio.h>
int main()
{
    int day;
    printf("enter a number from 1 to 7:");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Day of the week is :sunday");
        break;
    case 2:
        printf("Day of the week is :monday");
        break;
    case 3:
        printf("Day of the week is :tuesdy");
        break;
    case 4:
        printf("Day of the week is :wednesday");
        break;
    case 5:
        printf("Day of the week is :thursday");

        break;
    case 6:
        printf("Day of the week is :friday");
        break;
    case 7:
        printf("Day of the week is :saturday");
        break;

    default:
        printf("invalid input! place enter a number between 1 to 7");
        break;
    }

    return 0;
}








