#include <stdio.h>
int main()
{
    int i, n;
    
    printf("Enter the size of array");
    scanf("%d", &n);
    int a[n];
    printf("Enter  integer to the  array \n");

    for (i = 0; i < n; i++)
        
    {
        scanf("%d", &a[i]);
        printf("\n");
    }
    printf("the array element in reverse order \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
