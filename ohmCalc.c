#include <stdio.h>




int main(){


    int userInputNumRes, resN, currentRes;
    float userInputResValue, totalRes = 0; 

    
    do
    {
        printf("Enter the number of resistors (must be greater than 0): ");
        scanf("%d", &userInputNumRes); 

        if (userInputNumRes <= 0)
        {
            printf("Number of resistors must be greater than 0. Please try again.\n");
        }
        

    } while (userInputNumRes <= 0);
    

    for (resN = 1; resN <= userInputNumRes; resN++)
    {
        currentRes = resN;

        printf("Enter value of R%d (in Ohms): ", currentRes); 
        scanf("%f", &userInputResValue);

        
        totalRes = (1 / userInputResValue) + totalRes;  
        
        
    }

    printf("Total Resistance = %0.1f Ohms\n", 1 / totalRes); 
    



    return 0; 
}
