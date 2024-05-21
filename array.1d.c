#include <stdio.h>

int main()

{

    int a[5];
    printf("Enter 5 element of your array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the array element are ..");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}