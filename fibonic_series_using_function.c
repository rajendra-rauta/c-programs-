#include <stdio.h>
void fib(int n)
{

    int first = 0, second = 1, next;
    printf("fibbonic series up to %d terms: \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
}
int main()
{
    
    int term;
    printf("Enter the number of terms:");
    scanf("%d", &term);
    fib(term);

    return 0;
}
