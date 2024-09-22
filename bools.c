#include <stdio.h>
#include <stdbool.h>


int main(){
    
    int i = 10;
    bool checker = true; 

    while (checker==true)
    {   
        if (i<=200)
        {
            printf("%d\n", i);   
            if (i != 200)
            {
            printf("not yet 200\n");
            }
            i = i +10;  
        }

        else{
            printf("YAY!! i=200\n");

            checker = false; 
        }
    }

    printf("hello world");

    return 0;
}
