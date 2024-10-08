#include <stdio.h>



int main(){


    int numInput, i,j;


    printf("Enter an integer: ");
    scanf("%d", &numInput); 

    for (i = 0; i <= numInput; i++)
    {



        for (j = 0; j < i; j++)
        {
            
            printf(" ");
            

        }
        printf("%d\n", i); 

        

    }
    


    return 0; 
}
