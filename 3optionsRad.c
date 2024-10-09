#include <stdio.h>



int main(){

    int loopOpt;
    const float pi = 3.14159265; 
    float r;
    float aoc, coc;
    char yes = 'y'; 

    printf("Which loop do you want to use - enter 1, 2 or 3: ");
    scanf("%d", &loopOpt);

    int while1 = 0;
    if (loopOpt == 1)
    {
        printf("\nThis loop runs 3 times\n\n");
        while (while1 < 3)
        {
            printf("Enter a radius for a circle: ");
            scanf("%f", &r);
            aoc = pi * (r * r);
            coc = 2 * pi * r;
            printf("The area of the cicle is: %0.2f\nand the circumference is: %0.2f\n", aoc, coc);
            printf("\n");    
            while1++;    
        }
        
    }


    if (loopOpt == 2)
    {
        printf("\nThis loop keeps running until you enter a negative value\n\n");
       
       do
       {
            printf("Enter a radius for a circle: ");
            scanf("%f", &r);
            if (r > -1)
            {
            aoc = pi * (r * r);
            coc = 2 * pi * r;
            printf("The area of the cicle is: %0.2f\nand the circumference is: %0.2f\n", aoc, coc);
            printf("\n");            
            
            }
             


        } while (r > -1);
    }
    

    if (loopOpt == 3)
    {
        printf("\nThis loop keeps running if you enter yes (y) or no (n)\n\n");
       
       
        while(yes == 'y'){
            printf("Would you like to keep going yes (y) no (n): ");
            scanf(" %c", &yes);

            printf("\n"); 

            if (yes == 'y')
            {
            printf("Enter a radius for a circle: ");
            scanf("%f", &r);
            aoc = pi * (r * r);
            coc = 2 * pi * r;
            printf("The area of the cicle is: %0.2f\nand the circumference is: %0.2f\n", aoc, coc);
            printf("\n");                
            }


        }
             
    }




    return 0;
}
