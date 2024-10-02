#include <stdio.h>

//Ghassan Murad Agha 09/20/24

int main(){

    int userInput; //the total number of minutes from the user
    int placeHolder = 0; //this is a place holder variable used to keep a loop going while 60 can still fit as a whole number within the user input value
    int numHours = 0; //This is the total number of hours that will be printed, this is retrived by seeing how many times 60 can fit in the user input as a whole int
    int numMins = 0; //This is the remainder mins, this is retrived by subtracting 60 each time an hour can fit within the user input


    //asking the user for an input in mins
    printf("Enter a whole number of minutes: ");
    scanf("%d", &userInput);



    //setting numMins to userInput will allow us to subtract 60 from the user input without tripping the for loop
    numMins = userInput; 


    //for loop that keeps on going as long as 60 can fit within the user input as a whole int, if so, add one to the number of hours
    //this for loop also subtracts 60 from the total given input, this is done so we can keep track of the mins
    for (placeHolder = 0; placeHolder <= userInput -60; placeHolder = placeHolder + 60)
    {
        numHours++; 
        numMins = numMins - 60; 

    }   

    //final print statment of all the values

    printf("%d minutes = %d hour(s) and %d minute(s)", userInput, numHours, numMins); 


    return 0; 

}
