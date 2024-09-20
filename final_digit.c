#include <stdio.h>

int main(){


    int userInput; 
    int lastDigit;

    printf("Enter your number and I will return the final digit of the number: ");

    scanf("%d", &userInput); 

    lastDigit = userInput % 10; 

    printf("your last digit is: %d", lastDigit); 


    return 0;
}
