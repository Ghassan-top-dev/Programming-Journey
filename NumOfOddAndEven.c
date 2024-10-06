#include <stdio.h>


int main(){


    int inputNum, i;
    int odd = 0;
    int even = 0;

    i = 1;


    while (i<=5)
    {

        printf("Enter an integer: ");
        scanf("%d", &inputNum);

        if (inputNum % 2 == 0)
        {
            even++;        

        }
        else if(inputNum % 2 == 1){

            odd++;
        }
        

        i = i + 1; 
    }
    


    printf("Number of odd values enetered = %d \nNumber of even numbers entered = %d", odd, even);


    return 0; 
}
