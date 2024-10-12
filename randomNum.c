#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Step 1: Define an array with some elements
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // Step 2: Get the number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Step 3: Seed the random number generator
    srand(time(0));
    
    // Step 4: Generate a random index between 0 and size-1
    int randomIndex = rand() % size;
    
    // Step 5: Print the random element
    printf("Random element: %d\n", arr[randomIndex]);
    

    return 0;
}
