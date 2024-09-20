#include <stdio.h>
#include <math.h>


int main(){


    float userInput; 
    int lastDigit;
    int wholeNum;

    printf("Enter a float number with a max of 2 decimal places and I will return the final digit of the number: ");

    scanf("%f", &userInput); 

    wholeNum = userInput * 100; 

    lastDigit = wholeNum % 10; 

    printf("your last digit is: %d", lastDigit); 


    return 0;
}
