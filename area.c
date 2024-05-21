#include <stdio.h>
int main()
{
    int choice;
    printf("Enter\n");
    printf("1 for area of triangle\n");
    printf("2 for area of circle\n");
    printf("3 for area of retuangle\n");
    scanf("%d", &choice);
    int b, h, l, r;
    float area;
    switch (choice)
    {

    case 1:

        printf("Enter the base and hight of tringle\n");
        scanf("%d%d", &b, &h);

        area = 0.5 * (b * h);
        printf("area of tringle is %.2f", area);

        break;

    case 2:

        printf("Enter the radious of circle \n");
        scanf("%d", &r);
        area = 3.14159 * r * r;
        printf("The area of circle is %.2f", area);
        break;

    case 3:

        printf("Enter the  length and breath of  rectangle\n");
        scanf("%d%d", &l, &b);
        area = l * b;

        printf("the area of rectangle is %.2f", area);

        break;

    default:
        printf("you have enter a invalid number.");

        break;
    }

    return 0;
}
