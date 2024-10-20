#include <stdio.h>


int main(){

    int arr[] = {42, 7, 93, 15, 64, 27, 38, 12, 58, 3, 85, 19, 71, 29, 6, 50, 81, 33};
    int arrLength = 18; 
    int temp, i, lastNum, followedIndex, n;

    lastNum = arrLength - 1; 
    int printer = 0; 

    
 for (n = 0; n < arrLength; n++){
    for (i = 0; i < arrLength; i++){
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i + 1];
            arr[i + 1] = arr[i]; 
            arr[i] = temp; 
        }
    }
 }

   
    for (printer = 0; printer < arrLength; printer++){
        printf("%d\n", arr[printer]);   
    }
  



    return 0; 
}
