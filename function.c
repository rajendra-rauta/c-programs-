#include <stdio.h>
void add(int, int); // FUNCTION DECLEARATION
int main()
{
    int a, b;

    printf("Enter the value of two number\n");
    scanf("%d%d", &a, &b);
    add(a, b); // FUNCTION CALL
}
void add(int x, int y)
