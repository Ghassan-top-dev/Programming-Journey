#include <stdio.h>

void squareInt (int, int *); 





int main(){

    int aNumber = 5;
    int result; 

    squareInt(aNumber, &result);

    printf("%d", result); 




    return 0; 
}


void squareInt (int aNumber, int * result){

    *result = aNumber * aNumber; 

}
