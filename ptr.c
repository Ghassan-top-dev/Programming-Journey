#include <stdio.h>



int main(){

    int num = 5; //ex mem address: 2000x

    int * ptr1; //we want ptr1 to hold 2000x

    ptr1 = &num; //now ptr1 holds the mem address of num
    //ptr1 points/refers to the memory location of num

    //indirectly refer to num

    //direct reference: printf("%d", &num); 
    //indirectly: printf("*%d", *ptr1); 

    printf("*%d", *ptr1); 

    //*ptr1 means go to the location pointed to by ptr1 and print the constant value

    return 0; 
}
