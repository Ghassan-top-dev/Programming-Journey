#include <stdio.h>

int main(){


    int num1, num2, num3;

    printf("Enter 3 numbers: "); 
    scanf("%d%d%d", &num1, &num2, &num3); 

    if (num1>num2)
    {
        if (num1 > num3)
        {
    
            printf("Number 1 = %d is the largest number", num1);
        }
        

    }
    if (num2>num1)
    {
        if (num2 > num3)
        {
    
            printf("Number 2 = %d is the largest number", num2);
        }
        

    }
    if (num3>num1)
    {
        if (num3 > num1)
        {
    
            printf("Number 3 = %d is the largest number", num3);
        }
        

    }



    return 0;
}
