#include <stdio.h>


int main(){

    int inputNum; 

    do{

        printf("Enter a positive integer: ");
        scanf("%d", &inputNum);

    } while(inputNum <= 0); 
    



    
    if(inputNum > 0 && inputNum < 100)
    {
        while (inputNum < 100)
        {

        inputNum = inputNum * 2;

        printf("%d ", inputNum); 

        if (inputNum * 2 > 100)
        {
            break;
 
        }
        
        }


    }
    
    
    
    


    return 0; 
}
