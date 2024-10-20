#include <stdio.h>


int main(){

    int arr[] = {42, 7, 93, 15, 64, 27, 38, 12, 58, 3, 85, 19, 71, 29, 6, 50, 81, 33};
    int arrLength = 18; 
    int temp, i, lastNum, followedIndex, n;

    lastNum = arrLength - 1; 
    int printer = 0; 

    int currentIndex = 0; 
    
 for (n = -2; n < arrLength; n++){

    for (i = 0; i < arrLength; i++){
        

        
        if (arr[currentIndex] > arr[currentIndex + 1])
        {
            temp = arr[currentIndex + 1];
            arr[currentIndex + 1] = arr[currentIndex]; 
            arr[currentIndex] = temp; 
            currentIndex++;
        }else if(arr[currentIndex] < arr[currentIndex + 1]){
            currentIndex++;
        }
        else{
            currentIndex = 0; 

        }


    }

 }

   
    for (printer = 0; printer < arrLength; printer++){
        printf("%d\n", arr[printer]);   
    }
  



    return 0; 
}


