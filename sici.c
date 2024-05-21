#include <stdio.h>
#include<math.h>
int main()
{
    float p, t, r, si, ci;

    printf("Enter principal number (p) ...:");
    scanf("%f", &p);
    printf("enter time(t)");
    scanf("%f", &t);
    printf("Enter rate of interst (r)");
    scanf("%f", &r);
    si = p * t * r / 100;
    ci = p * (pow(1 + r / 100, t) - 1);
    printf("simple interst =%f\n", si);
    printf("compound interst =%f\n", ci);

    return 0;
}