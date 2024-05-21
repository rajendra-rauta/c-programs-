#include <stdio.h>

int main ()
{
    int arr[] = {311,52,3,4,5,6,67};
    int* arrayptr=arr;
    printf("value at position 3 of the array is %d\n",arr[3]);
    
    printf("the address of first element of the array is %d \n",&arr[0]);    
    printf("the address of first element of the array is %d \n",arr);     
     printf("the address of second element of the array is %d \n",&arr[1]);     
     printf("the address of second element of the array is %d \n",arr + 1);    
    printf("the address of third element of the array is %d \n",&arr[2]);    
    printf("the address of third element of the array is %d \n",arr  + 2);    
    

printf("the value at address of first element of the array is %d \n ",*(&arr[0]));
printf("the value at address of first element of the array is %d \n ",arr[0]);
printf("the value at address of first element of the array is %d \n ",*(arr));
printf("the value at address of second element of the array is %d \n ",*(&arr[1]));
printf("the value at address of second element of the array is %d \n ",arr[1]);
printf("the value at address of second element of the array is %d \n ",*(arr + 1));


return 0;
}