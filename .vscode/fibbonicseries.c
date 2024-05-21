#include <stdio.h>

int main()

{

    int x, y, z, n;
    printf("Enter maximum limit ...:");
    scanf("%d", &z);
    x = 0;
    y = 1;
    z = 0;

    while (z <= 100)
    {if (z>=20)
    {
        printf("%d\n", z);
    }
    
        
        x = y;
        y = z;
        z = x + y;
    }

    return 0;
}