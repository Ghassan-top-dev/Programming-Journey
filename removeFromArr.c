/*
 * Program  : Remove an element in the array
 * Language : C
 */

#include<stdio.h>


int main()
{
    
    int size = 5; 
    int arr[5] = {1, 20, 5, 78, 30};
    int z, key, i, index = -1;

    
    /*
     * iterate the array elements using loop
     * if any element matches the key, store the index
     */


    for(z = 0; z < size; size--){
        
        printf("Enter element to delete\n");
        scanf("%d",&key);

    
    
    
    for(i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    {
        //shift all the element from index+1 by one position to the left
        for(i = index; i < size - 1; i++)
            arr[i] = arr[i+1];

        printf("New Array : ");
        for(i = 0; i < size - 1; i++)
            printf("%d ",arr[i]);
    }
    else
        printf("Element Not Found\n");
        
        
    }


   

    return 0;
}
