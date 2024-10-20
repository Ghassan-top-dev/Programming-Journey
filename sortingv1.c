#include <stdio.h>


int main(){

    int arr[] = {3,2,1}; 
    int arrLength = 3; 
    int temp, i, lastNum, followedIndex, n;

    lastNum = arrLength - 1; 
    int printer = 0; 
    




   for (i = 0; i < arrLength; i++){ //big bertha

        
        for (n = 0; n < arrLength; n++){
        
        if (arr[lastNum] < arr[lastNum - n])
        {
            temp = arr[lastNum];
            arr[lastNum] = arr[lastNum - n]; 
            arr[lastNum - n] = temp; 
            followedIndex = arr[lastNum - n]; 


        }

        
    }

    }
   
    printer = 0;
    for (i = 0; i < arrLength; i++){
        printf("%d\n", arr[printer]);   
        printer++; 
    }
  



    return 0; 
}




