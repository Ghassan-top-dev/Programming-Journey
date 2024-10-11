#include <stdio.h>


int myPower(int,int);

int main(){

    int num1, num2;
    int result; 


    /*
    
    Now replace lines 18 and 19 to read 2 integers from the keyboard using function readOne
    num1 = readOne();    
    num2 = readOne(); 
    
    */

    printf("Enter 2 integers: "); 
    scanf("%d%d", &num1, &num2); 

    printf("%d to the power of %d = %d\n", num1, num2, myPower (num1, num2));

    return 0; 
}


int myPower(int x, int y){


    int power = 1; 
    int i; 

    for (i = 1; i<= y; i++){  //goes y times

        power = power * x; 
    }

    return power; 

}

int readOne (void) {


    int num; 

    printf("Enter a value: ");
    scanf("%d", &num);

    return num;
}
