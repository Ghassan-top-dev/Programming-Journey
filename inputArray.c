#include <stdio.h>

int main() {
    int n, i;

    printf("Enter how many elements you want: ");
    scanf("%d", &n);

    // Initialize the array with the size entered by the user
    int arr[n];

    printf("Enter the numbers in the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Optional: Print the array to confirm input
    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
