#include <stdio.h>

int main(){

    int operationNum; 
    float nums[] ={};

    printf("How many numbers would you like to store: \n"); 

    scanf("%d\n", &operationNum); 

    printf("Enter integers: \n");



    for (operationNum; operationNum != 0; operationNum--)
    {
        scanf("%f\n",&nums[operationNum]);
    }
    

    printf("Lets print the inputted numbers: \n"); 

    for (operationNum; operationNum != 0; operationNum--)
    {
        printf("%f", nums[operationNum]); 
    }












}
