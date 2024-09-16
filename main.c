#include <stdio.h>

float operation; 
float numb1;
float numb2;


int main(void) {
  printf("What would you like to do:\n");

  printf("Add 2 numbers (1) \n Subtract 2 numbers (2) \n Multiply 2 numbers (3) \n Divide 2 numbers (4)\n");

  scanf("%f", &operation); 

  printf("Enter first number: \n"); 

  scanf("%f", &numb1); 

  printf("Enter second number: \n"); 

  scanf("%f", &numb2); 

  
  if (operation == 1){
    printf("The Sum of the 2 numbers is: %f", numb1 + numb2); 
  
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
