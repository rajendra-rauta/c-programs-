//  value swapping using call by referance


#include <stdio.h>
void swap(int *x, int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
int main()
{
	int a, b;
	
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	printf("Before swapping: a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("After swapping: a = %d, b = %d\n", a, b);
	return 0;
}
