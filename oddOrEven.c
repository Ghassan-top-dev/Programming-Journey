#include <stdio.h>

int main(){

    int inputNum;

    printf("Enter a whole number and I will return if it is odd or even: ");


    scanf("%d", &inputNum); 

    if (inputNum % 2 == 0)
    {
    printf("The number is even");   

    }else{

        printf("The number is odd");   

    }
    


    return 0;
}
