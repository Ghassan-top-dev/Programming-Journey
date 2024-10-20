#include <stdio.h>


int main(){

    int arr[] = {3,2,1}; 
    int arrLength = 3; 
    int temp, i, lastNum, followedIndex, n;

    lastNum = arrLength - 1; 
    int printer = 0; 

    int currentIndex = 0; 
    


    for (i = 0; i < arrLength; i++){
        

        
        if (arr[currentIndex] > arr[currentIndex + 1])
        {
            temp = arr[currentIndex + 1];
            arr[currentIndex + 1] = arr[currentIndex]; 
            arr[currentIndex] = temp; 
            currentIndex++;

            
            
        }

        printf("\n\n");   

    }



   
    for (printer = 0; printer < arrLength; printer++){
        printf("%d\n", arr[printer]);   
    }
  



    return 0; 
}




