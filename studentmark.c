  #include <stdio.h>
int main()
{

    int phy, che, math, bio, comp;
    float per;
    printf("Enter the mark of your five subject ");
    scanf("%d%d%d%d%d", &phy, &che, &math, &bio, &comp);

    per = (phy + che + math + bio + comp) / 5.0;

    printf("percentage of student%f\n", per);

    if (per >= 90)
    {
        printf("GREAD A");
    }
    else if (per >= 80)
    {
        printf("GREAD B");
    }
    else if (per >= 70)
    {
        printf("GREAD C");
    }
    else if (per >= 60)
    {
        printf("GREAD D");
    }
    else if (per >= 40)
    {
        printf("GREAD E");
    }
    else
    {
        printf("GREAD F");
    }

    return 0;

}
