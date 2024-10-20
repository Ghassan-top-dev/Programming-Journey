#include <stdio.h>



int main(){

  for (i = 0; i < arrLength; i++){
                
        if (arr[lastNum] < arr[lastNum - 1])
        {
            temp = arr[lastNum];
            arr[lastNum] = arr[lastNum - 1]; 
            arr[lastNum - 1] = temp; 
        }
        
    }



  return 0;
}
