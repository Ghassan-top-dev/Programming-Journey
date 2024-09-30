#include <stdio.h>


int main(){

    int milesTravelled, bonus;  //variables for input and output

    printf("Enter the travelled miles: ");
    scanf("%d", &milesTravelled); //scans the amount of miles travelled 


    //calculates the bonus
    if(milesTravelled > 5000){
        bonus = 100;
    }
    else if(milesTravelled > 3000 && milesTravelled < 5000){
        bonus = 60;
    }
    else{
        bonus = 10; 
    }

    printf("bonus = %d\n", bonus); //prints the bonus


    return 0; 
}
