WAp  to creat a dynamic momory using the malloc function

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *dynamicmemory;
    int size;
    printf("Enter the size of your dynamic memory: ");
    scanf("%d", &size);

    dynamicmemory = (int *)malloc(size * sizeof(int));
    if (dynamicmemory == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Dynamic array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", dynamicmemory[i]);
    }
    free(dynamicmemory);
    return 0;
}


