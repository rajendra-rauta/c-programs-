#include <stdio.h>
int main()
{
    int sun, mon, tue, wed, thu, fri, sat, choice;

    printf("Enter\n");
    printf("1 for sunday\n");
    printf("2 for monday\n");
    printf("3 for tuesday\n");
    printf("4 for wednesday\n");
    printf("5 for thursday\n");
    printf("6 for friday\n");
    printf("7 for saturday\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesdy");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("thursday");

        break;
    case 6:
        printf("friday");
        break;
    case 7:
        printf("saturday");
        break;

    default:
        printf("you give a invalid number");
        break;
    }
    return 0;
}