// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[5];
//     int l;
//     printf("Enter a string");
//     gets(a);
//     l = strlen(a);
//     printf("the length of the string is %d", l);

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[0];
//     int i;
//     printf("Enter a string");
//     scanf("%s",a);

//     printf("the string chearactor is %s",a);

// return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[5];
//     int l,c;
//     printf("Enter a string: ");
//     gets(a);
//     l = strlen(a);
//     printf("the length of the string is %d \n", l);
//     for(int i=0;i<6;i++){
//         c=a[i];
//         printf("%i",&c);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("Enter your 1st number");
//     scanf("%d", &a);
//     printf("the number is %d", a);

//     return 0;
// }


#include <stdio.h>

// Function to perform bubble sort on the array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to display an array
void displayArray(int arr[], int n, const char* message) {
    printf("%s: ", message);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    // You can modify the size and content of the array
    int arr[] = {4, 2, 7, 1, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the unsorted array
    displayArray(arr, n, "Unsorted Array");

    // Sort the array in ascending order
    bubbleSort(arr, n);

    // Display the sorted array
    displayArray(arr, n, "Sorted Array");

    return 0;
}


