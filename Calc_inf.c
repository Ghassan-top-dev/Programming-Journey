#include <stdio.h>

int main() {
    int operationNum, i, ask;
    int renew = 0; 
    int trak = 0; 

    printf("Enter how many elements you want: ");
    scanf("%d", &operationNum);

    // Initialize the array with the size entered by the user
    int arr[operationNum];

    printf("Enter the numbers in the array: ");
    for (i = 0; i < operationNum; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n \n \n \n");

    for (i = 0; i < operationNum-1; i++)
    {

        trak++; 

        printf("\nWhat would you like to do with index %d and the previous index(s)? \n", trak+1);
        printf("Add (1) Subtract (2) Multiply (3) Divide (4): \n");
        scanf("%d",&ask);

        if (ask == 1)
        {
            if (renew != 0)
            {
                printf("The sum of the index %d and the previous index(s) is: %d", arr[i+1], arr[i+1] + renew);
                renew = renew + arr[i+1]; 


            }
            else{

                printf("The sum of the index %d and the previous index(s) is: %d", arr[i+1], arr[i] + arr[i+1]); 
                renew = arr[i] + arr[i+1]; 

            }
            

        }
        else if (ask == 2)
        {
            if (renew != 0)
            {
                printf("The difference of the index %d and the previous index(s) is: %d", trak+1, renew - arr[i+1]);
                renew = renew - arr[i+1]; 


            }
            else{

                printf("The difference of the index %d and the previous index(s) is: %d", trak+1, arr[i] - arr[i+1]); 
                renew = arr[i] - arr[i+1]; 

            }
        }
        else if (ask == 3)
        {
            if (renew != 0)
            {
                printf("The product of the index %d and the previous index(s) is: %d", trak+1, arr[i+1] * renew);
                renew = renew * arr[i+1]; 


            }
            else{

                printf("The product of the index %d and the previous index(s) is: %d", trak+1, arr[i] * arr[i+1]); 
                renew = arr[i] * arr[i+1]; 

            }
        }
        else if (ask == 4)
        {
            if (renew != 0)
            {
                printf("The quotient of the index %d and the previous index(s) is: %d", trak+1, renew / arr[i+1]);
                renew = renew / arr[i+1]; 


            }
            else{

                printf("The quotient of the index %d and the previous index(s) is: %d", trak+1, arr[i] / arr[i+1]); 
                renew = arr[i] / arr[i+1]; 

            }
        }

    }

    return 0;


}




