#include <stdio.h>


int main(){

    int timeFormat, hour, mins, hourCheck; //time variables
    char amPm; 


    printf("Would you like to enter the time in 12-hour format (enter 1) or 24-hour format (enter 2)? "); //this prompts the user for the time format
    scanf("%d", &timeFormat); 

    if (timeFormat == 1)
    {
        printf("Enter a value between 0 and 12 for hour: ");
        scanf("%d", &hour);
        printf("Enter a value between 0 and 60 for minutes: ");
        scanf("%d", &mins);
        printf("Enter a for am or p for pm: ");
        scanf(" %c", &amPm);

        if (hour < 12 && amPm == 'a')
        {
            hourCheck = hour; 
        }
        else if(hour < 12 && amPm == 'p'){
            hourCheck = hour; 
            hourCheck = hourCheck + 12; 

        }
        else if(hour == 12 && amPm == 'a'){
            hourCheck = 00; 

        }
        else if(hour == 12 && amPm == 'p'){
            hourCheck = hour; 

        }
        

        if (amPm == 'a')
        {
        printf("---------------------------\n");
        printf("You entered %02d:%02d %cm \n", hour, mins, amPm);
        printf("In 24 hour time format - you entered %02d:%02d\n", hourCheck, mins);
        printf("---------------------------\n");        
        } 
        
        else if(amPm == 'p'){
        printf("---------------------------\n");
        printf("You entered %02d:%02d %cm \n", hour, mins, amPm);
        printf("In 24 hour time format - you entered %02d:%02d\n", hourCheck, mins);
        printf("---------------------------\n");     
        }
        

        


    } 
    else if(timeFormat == 2)
    {

        printf("Enter a value between 0 and 24 for hour: ");
        scanf("%d\n", &hour);
        printf("Enter a value between 0 and 60 for minutes: ");
        scanf("%d\n", &mins);


        if (hour <= 12)
        {
            hourCheck = hour; 
        }
        else if(hour > 12){
            hourCheck = hour; 
            hourCheck = hourCheck - 12; 

        }
       

        printf("---------------------------\n");
        printf("You entered %02d:%02d\n", hour, mins);
        printf("In 12 hour time format - you entered %02d:%02d \n", hourCheck, mins);
        printf("---------------------------\n"); 


    }
    

    return 0; 
}
