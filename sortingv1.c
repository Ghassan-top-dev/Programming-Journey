#include <stdio.h>

int main(){

    int arrLength;
    printf("Enter how many numbers you want to be sorted (Total amount): ");
    scanf("%d", &arrLength);

    int temp, i, n, c;
    int arr[arrLength];  // Declare the array based on user input

    // Input the array elements
    for (c = 0; c < arrLength; c++) {
        printf("Enter your numbers: ");
        scanf("%d", &arr[c]);
    }
    
    // Bubble sort algorithm
    for (n = 0; n < arrLength - 1; n++) {
        for (i = 0; i < arrLength - 1 - n; i++) {  
            if (arr[i] > arr[i + 1]) {
                // Swap arr[i] and arr[i + 1]
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("\n\n");
    printf("Sorted array:\n");
    for (i = 0; i < arrLength; i++) {
        printf("%d\n", arr[i]);   
    }

    return 0; 
}
