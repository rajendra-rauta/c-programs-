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
	}
	printf("the element of your array are ");
	for ( i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
	

	return 0;
}