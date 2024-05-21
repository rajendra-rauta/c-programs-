#include <stdio.h>
int input();
int choice;

int main()
{

    // menu   card

    printf("press 1 for tea\n");
    // scanf("%d", &choice);
    printf("press 2 for cofee\n");
    // scanf("%d", &choice);
    printf("press 3 for juice\n");
    // scanf("%d", &choice);
    printf("press 4 for sandwhih\n");
    scanf("%d", &choice);
    // taking input

    switch (choice)
    {
    case 1:
        printf("your order is tea\n ");
        break;
    case 2:
        printf("your order is cofee\n");
        break;
    case 3:
        printf("your order is juice\n");
        break;
    case 4:
        printf("your order is sandwhih\n");
        break;
    default:

        printf("you have entered a wronge number ");

        break;
    }

    return 0;
}
