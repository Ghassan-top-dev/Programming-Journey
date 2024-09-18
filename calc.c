#include <stdio.h>

float operation; 
int operationNum; 
float numb1;
float numb2;


int main(void) {
  printf("What would you like to do:\n");

  printf("Add (1) \n (2) \n Multiply (3) \n Divide (4)\n");

  scanf("%f", &operation); 

  printf("Enter how many numbers you would like to calculate: \n"); 

  scanf("%d", &operationNum); 

 
 

  
  if (operation == 1){
    printf("The Sum of the 2 numbers is: %f", numb1 + numb2); 

    for (operationNum; operationNum != 0; operationNum--)
            {
                
            }
  
  } 

  if (operation == 2){
    printf("The first number minus the second number results in: %f", numb1 - numb2); 

  } 

  if (operation == 3){
    printf("The multiplying the 2 numbers results in: %f", numb1 * numb2); 

  } 

  if (operation == 4){
    printf("Dividing the first number by the second number results in: %f", numb1 / numb2); 

  } 

  return 0;
}
