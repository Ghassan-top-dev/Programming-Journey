#include <stdio.h>

int main(){


    int dash; 
    int space; 





    for (dash = 0; dash < 2; dash++)
    {
        printf("+----------+----------+\n");
        for (space = 0; space < 3; space++)
        {
            printf("|          |          |\n");
        }


        if (dash == 1)
        {
            printf("+----------+----------+\n");
        }
        
    }
    



    return 0; 
}




