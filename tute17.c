#include<stdio.h>
int main ()
{

    int num;
    for(int i=0; i<8;i++)

    {
        printf("%d\n",i);
        for (int i = 0; i < 8; i++)
        {
           printf("enter the number,enter 0 to exit\n");
           scanf("%d", &num);
           if (num==0)

           {
            goto end;
           }
           
        }
        
    }
    end:
    return 0;
}