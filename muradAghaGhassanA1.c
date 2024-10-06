/*
TODO
-get rid of arr and use existing matrix
-add total cost
-COMMENT CODE
*/
#include <stdio.h>

int main(){

    int timeFormat, hour, mins, hourCheck, lessThan12; //time variables
    char amPm, amPm2; //Variables that determine if the time is in am or pm
    int closestDep, hotel, i, hotelChoice, dayInMontreal, rides, rideable, birthday, total1, discount1, modBirthday, sum, subInt; //misc variables for different tasks
    float subTotal; 
    int arr[] = {715,815,915,1015,1115,1515,1615,1715}; 
    int matrixFlights[2][8] = { {715,815,915,1015,1115,1515,1615,1715} , {231,226,226,283,283,226,226,401} }; 
    int matrixHotels[3][3] = { {1,2,3} , {248,90,128} , {0,25,20} }; 
    char formattedNumber1[6];  // Enough space for "7:15" + null terminator
    char formattedNumber2[6];  // Enough space for "7:15" + null terminator

    printf("Would you like to enter the time in 12-hour format (enter 1) or 24-hour format (enter 2)? "); //this prompts the user for the time format
    scanf("%d", &timeFormat); 

    if (timeFormat == 1)
    {
        printf("\nEnter time in 12 hour format\n\n");
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
        





        closestDep = hourCheck; 

        closestDep = closestDep * 100 + mins;






        for (i = 0; i < 8; i++)
        {
            if (arr[i] - closestDep > 0)
            {   
                if (arr[i] <= 1115)
                {
                    sprintf(formattedNumber1, "%d:%02d", arr[i] / 100, arr[i] % 100); // Use sprintf to format the string
                }
                else if(arr[i] > 1115){
                    sprintf(formattedNumber1, "%d:%02d", (arr[i] - 1200) / 100, arr[i] % 100);
                }
                if (arr[i] <= 1115)
                {
                    sprintf(formattedNumber2, "%d:%02d", arr[i] / 100 + 1, arr[i] % 100 + 10);
                }
                else if(arr[i] > 1115){
                    sprintf(formattedNumber2, "%d:%02d", (arr[i] - 1100) / 100, arr[i] % 100 + 10);
                }

                if (arr[i] / 100 + 1 >  11 || (arr[i] - 1100) / 100 > 11)
                {
                    amPm2 = 'p';
                }
                else{
                    amPm2 = 'a';
                }
                printf("Closest departure time is: %s %c.m., arriving at %s %c.m.\n", formattedNumber1, amPm, formattedNumber2, amPm2); // Print the result
                break; // leaves the loop if condion is met
            }
        }
    } 
    else if(timeFormat == 2)
    {
        printf("\nEnter time in 24 hour format\n\n");
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
                    sprintf(formattedNumber1, "%d:%02d", arr[i] / 100, arr[i] % 100);
                }
                else if(arr[i] > 1115){

                    sprintf(formattedNumber1, "%d:%02d", (arr[i] - 1200) / 100, arr[i] % 100);
                }

                if (arr[i] <= 1115)
                {
                    sprintf(formattedNumber2, "%d:%02d", arr[i] / 100 + 1, arr[i] % 100 + 10);
                }
                else if(arr[i] > 1115){

                    sprintf(formattedNumber2, "%d:%02d", (arr[i] - 1100) / 100, arr[i] % 100 + 10);
                }

                if (arr[i] / 100 + 1 >  11 || (arr[i] - 1100) / 100 > 11)
                {
                    amPm2 = 'p';
                }
                else{

                    amPm2 = 'a';

                }
                

                // Print the result
                printf("Closest departure time is: %s %c.m., arriving at %s %c.m.\n", formattedNumber1, amPm, formattedNumber2, amPm2);

                
                break; // leaves the loop if condion is met


            }

        }

    }


    printf("\nWould you like a hotel in Montreal - Enter 0 for no; 1 for yes? "); 
    scanf("%d", &hotel);

    if (hotel == 1)
    {
        printf("\nThere are 3 hotels: \n1. Marriott: $248 per night\n2. Sheraton: $90 per night\n3. Double Tree: $128 per night\n\n");  

        printf("Your choice?:");  
        scanf("%d", &hotelChoice);
        printf("How many days in Montreal?");
        scanf("%d", &dayInMontreal);
        rideable = 1;
        printf("\nWould you like a ride from the airport to hotel? - enter 0 for no; 1 for yes ");
        scanf("%d", &rides); 
        

    }else if (hotel == 0){

        hotelChoice = dayInMontreal = rideable = 0; 
    }
    
    

    printf("\nNow enter your day of birth to qualify for discount2: ");
    scanf("%d", &birthday); 




//    printf("%d", matrix[1][i]);  // Outputs 2

    printf("\nYour total cost comes to:\n\n");
    printf("Cost of closest departure flight: $ %d.00\n", matrixFlights[1][i]);
    printf("Cost of Hotel for %d days: $ %d.00\n", dayInMontreal, matrixHotels[1][hotelChoice-1] * dayInMontreal); 
    printf("Cost of Ride: $ %d.00\n\n", matrixHotels[2][hotelChoice-1] * rideable);
    total1 = (matrixFlights[1][i]) + (matrixHotels[1][hotelChoice-1] * dayInMontreal) + (matrixHotels[2][hotelChoice-1] * rideable);
    printf("Total cost before tax: $ %d.00\n\n", total1);


    if (total1 % 11 == 0)
    {
        printf("You get a 5%% discount because the total cost was a multiple of 11 :)");
        float discount1 = total1 * 0.05;
        subTotal = total1 - discount1;
        subTotal = (int)subTotal;
        subInt = subTotal; 

    }else{
        printf("Sorry - you missed out on 5%% discount because the total cost was not a multiple of 11");
    }
    

    while(birthday>0){
        modBirthday = birthday % 10;
        sum = sum + modBirthday;
        birthday = birthday/10; 
    }



    if (subInt % birthday == 0)
    {
        printf("You get an additional 5%% discount because the total cost after discount1 was a multiple of the sum of digits in your day of birth :)");
    }else{
        printf("Sorry - you missed out on the additional 5%% discount because the total cost after discount1 was not a multiple of the sum of digits in your day of birth");
    }


    



    return 0; 
}





