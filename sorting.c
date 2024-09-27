#include <stdio.h>

int main(){
    
    int checker = 0;
    int nums, numAmt;
    int i; 

    int temp; 

    printf("Enter the number of elements in the array: "); 

    scanf("%d", &numAmt); 

    int arr[numAmt]; 

    printf("Enter the elemnts in the array to be sorted: "); 

    for (nums = 0; nums < numAmt; nums++)
    {
        scanf("%d", &arr[nums]);
    }

    temp = arr[0]; 

 
    for (nums = 0; nums < numAmt; nums++)
    {
        for (i = 0; i < 120; i++)
        {
            if(arr[0] > arr[1]){
            temp = arr[1]; 
            arr[0] = arr[1];
            arr[0] = temp; 
            }        

        }
        
        
    }

    for (nums = 0; nums < numAmt; nums++)
    {
        
        printf("%d", arr[nums]);
    }

    return 0; 

}
