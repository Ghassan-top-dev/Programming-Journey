#include <stdio.h>


void dummy(int arr[5]);

int main(){

    int someArray[5] = {3, -40, 92, 85,10};

    dummy(someArray);
    int i;

    for (i = 0; i<5;i++){

        printf("%d \n", someArray[i]);
    }


    return 0;
}


void dummy (int arr[5]){


    int i;
    for(i = 0; i<5; i++){
        arr[i] = arr [i] * 3; 
    }
}
