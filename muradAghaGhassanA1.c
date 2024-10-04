/*

TODO

-make it able to show am or pm when user chose 24 and your showing 12 - FIXED

-make the bs with closest departure time work to show 12 hour format if 24 hours is chose - FIXED
-implement if 12 was chosen. 


*/


#include <stdio.h>


int main(){

    int timeFormat, hour, mins, hourCheck, lessThan12; //time variables
    char amPm; 
    int closestDep; 
    int arr[] = {715,815,915,1015,1115,1515,1615,1715}; 
    int i;
    int difference;  
    char formatted_number[6];  // Enough space for "7:15" + null terminator
    int comeBackTom = 0; 


 
 




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
        scanf("%d", &hour);
        printf("Enter a value between 0 and 60 for minutes: ");
        scanf("%d", &mins);


        if (hour <= 12)
        {
            hourCheck = hour; 
            amPm = 'a';
        }
        else if(hour > 12){
            hourCheck = hour; 
            hourCheck = hourCheck - 12; 
            amPm = 'p';


        }
       

        printf("---------------------------\n");
        printf("You entered %02d:%02d\n", hour, mins);
        printf("In 12 hour time format - you entered %02d:%02d %cm\n", hourCheck, mins, amPm);
        printf("---------------------------\n"); 


        closestDep = hour; 

        closestDep = closestDep * 100 + mins;






        for (i = 0; i < 8; i++)
        {


            if (arr[i] - closestDep > 0)
            {
               // difference = arr[i] - closestDep; // not sure what this is for
                
                // Use sprintf to format the string
                
                if (arr[i] <= 1115)
                {
                    sprintf(formatted_number, "%d:%02d", arr[i] / 100, arr[i] % 100);
                }
                else if(arr[i] > 1115){

                    sprintf(formatted_number, "%d:%02d", (arr[i] - 1200) / 100, arr[i] % 100);
                }

                // Print the result
                printf("The closest departure time is: %s %cm\n", formatted_number, amPm);

                
                break; // leaves the loop if condion is met


            }

        }
        
        
         




    }


    

    return 0; 
}





