#include <stdio.h>



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



  return 0;
}
