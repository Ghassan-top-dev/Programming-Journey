#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    printf("\n\n\n");

    printf("    X    Y    Z \n"); 
    printf("       |    |  \n");
    printf("1      |    |  \n");
    printf("   ----|----|----\n");
    printf("2      |    |  \n");
    printf("   ----|----|----\n");
    printf("3      |    |  \n");
    printf("       |    |  \n");

    printf("\n\n\n");

    int x1 = 2; 
    int x2 = 2; 
    int x3 = 2; 
    int x4 = 2; 
    int x5 = 2; 
    int x6 = 2; 
    int x7 = 2; 
    int x8 = 2; 
    int x9 = 2;
    int i; 
    char xPos;
    char choiceXO; 
    int yPos; 
    char arr[9] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};
    char choices[2] = {'X','O'};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sizeOfCh = sizeof(choices) / sizeof(choices[0]);
    int whoStart = 0;
    int randomIndexCh;
    int randomIndex;
    srand(time(0));

    printf("Would you like to go first (1) or the computer (0): ");
    scanf("%d", &whoStart);
    


    for (i = 0; i < 9; i++)
    {

        

      
      if (whoStart == 1)
        {
            printf("Enter your choice, ex. xy3 (This will place an X in the Y-3 position): ");
            scanf(" %c %c %d", &choiceXO, &xPos, &yPos);   
            whoStart = 0;      
            
        }
        else{
            randomIndex = rand() % size;

            while (arr[randomIndex] != '-') //This will choose an availabe choice
            {
                randomIndex = rand() % size; //This will choose the '-' if its not chosen yet
            }
            
            randomIndexCh = rand() % sizeOfCh; //This chooses either X or O

            arr[randomIndex] = choices[randomIndexCh];   //This will set the chosen '-' to either X or O
            whoStart = 1; 
        }


        
        

/*---LINE 1 HOR---*/

        if (choiceXO == 'x' && xPos == 'x' && yPos == 1 || choiceXO == 'X' && xPos == 'X' && yPos == 1 || arr[0] == 'X')
        {

            x1 = 1; 
            arr[randomIndex] = 'X'; 
        }
        else if (choiceXO == 'o' && xPos == 'x' && yPos == 1 || choiceXO == 'O' && xPos == 'O' && yPos == 1 || arr[0] == 'O')
        {

            x1 = 0; 
            arr[randomIndex] = 'O'; 

        }
        else if (choiceXO == 'x' && xPos == 'y' && yPos == 1 || choiceXO == 'X' && xPos == 'Y' && yPos == 1 || arr[1] == 'X')
        {

            x2 = 1; 
            arr[randomIndex] = 'X'; 

        }
        else if (choiceXO == 'o' && xPos == 'y' && yPos == 1 || choiceXO == 'O' && xPos == 'Y' && yPos == 1 || arr[1] == 'O')
        {

            x2 = 0; 
            arr[randomIndex] = 'O'; 


        }
        else if (choiceXO == 'x' && xPos == 'z' && yPos == 1 || choiceXO == 'X' && xPos == 'Z' && yPos == 1 || arr[2] == 'X')
        {

            x3 = 1; 
            arr[randomIndex] = 'X'; 

        }
        else if (choiceXO == 'o' && xPos == 'z' && yPos == 1 || choiceXO == 'O' && xPos == 'Z' && yPos == 1 || arr[2] == 'O')
        {

            x3 = 0; 
            arr[randomIndex] = 'O'; 

        }

/*---LINE 2 HOR---*/
        else if (choiceXO == 'x' && xPos == 'x' && yPos == 2 || choiceXO == 'X' && xPos == 'X' && yPos == 2 || arr[3] == 'X')
        {

            x4 = 1; 
            arr[randomIndex] = 'X'; 

        }
        else if (choiceXO == 'o' && xPos == 'x' && yPos == 2 || choiceXO == 'O' && xPos == 'X' && yPos == 2 || arr[3] == 'O')
        {

            x4 = 0; 
            arr[randomIndex] = 'O'; 

        }
        else if (choiceXO == 'x' && xPos == 'y' && yPos == 2 || choiceXO == 'X' && xPos == 'Y' && yPos == 2 || arr[4] == 'X')
        {

            x5 = 1; 
            arr[randomIndex] = 'X'; 

        }
        else if (choiceXO == 'o' && xPos == 'y' && yPos == 2 || choiceXO == 'O' && xPos == 'Y' && yPos == 2 || arr[4] == 'O')
        {

            x5 = 0; 
            arr[randomIndex] = 'O'; 

        }
        else if (choiceXO == 'x' && xPos == 'z' && yPos == 2 || choiceXO == 'X' && xPos == 'Z' && yPos == 2 || arr[5] == 'X')
        {

            x6 = 1; 
            arr[randomIndex] = 'X'; 

        }
        else if (choiceXO == 'o' &&  xPos == 'z' && yPos == 2 || choiceXO == 'O' && xPos == 'Z' && yPos == 2 || arr[5] == 'O')
        {

            x6 = 0; 
            arr[randomIndex] = 'O'; 

        }

/*---LINE 3 HOR---*/
        else if (choiceXO == 'x' && xPos == 'x' && yPos == 3 || choiceXO == 'X' && xPos == 'X' && yPos == 3 || arr[6] == 'X')
        {

            x7 = 1; 
            arr[randomIndex] = 'X'; 

        }
        else if (choiceXO == 'o' && xPos == 'x' && yPos == 3 || choiceXO == 'O' && xPos == 'X' && yPos == 3 || arr[6] == 'O')
        {

            x7 = 0; 
            arr[randomIndex] = 'O'; 

        }
        else if (choiceXO == 'x' && xPos == 'y' && yPos == 3 || choiceXO == 'X' && xPos == 'Y' && yPos == 3 || arr[7] == 'X')
        {

            x8 = 1; 
            arr[randomIndex] = 'X'; 

        }
        else if (choiceXO == 'o' && xPos == 'y' && yPos == 3 || choiceXO == 'O' && xPos == 'Y' && yPos == 3 || arr[7] == 'O')
        {

            x8 = 0; 
            arr[randomIndex] = 'O'; 

        }
        else if (choiceXO == 'x' && xPos == 'z' && yPos == 3 || choiceXO == 'X' && xPos == 'Z' && yPos == 3 || arr[8] == 'X')
        {

            x9= 1; 
            arr[randomIndex] = 'X'; 

        }
        else if (choiceXO == 'o' && xPos == 'z' && yPos == 3 || choiceXO == 'O' && xPos == 'Z' && yPos == 3 || arr[8] == 'O')
        {

            x9 = 0; 
            arr[randomIndex] = 'O'; 

        }


        
        
        

        printf("\n\n\n");
    

        printf("    X    Y    Z \n"); 
        printf("       |    |  \n");
        printf("1%s%s%s%s%s%s",x1 == 1 ?"    X":(x1 == 0 ?"    O": "     ")," |",x2 == 1 ?"  X":(x2 == 0 ?"  O": "   ")," |",x3 == 1 ?"  X":(x3 == 0 ?"  O": "     "),"\n");
        printf("   ----|----|----\n");
        printf("2%s%s%s%s%s%s",x4 == 1 ?"    X":(x4 == 0 ?"    O": "     ")," |",x5 == 1 ?"  X":(x5 == 0 ?"  O": "   ")," |",x6 == 1 ?"  X":(x6 == 0 ?"  O": "     "),"\n");
        printf("   ----|----|----\n");
        printf("3%s%s%s%s%s%s",x7 == 1 ?"    X":(x7 == 0 ?"    O": "     ")," |",x8 == 1 ?"  X":(x8 == 0 ?"  O": "   ")," |",x9 == 1 ?"  X":(x9 == 0 ?"  O": "     "),"\n");
        printf("       |    |  \n");


        printf("\n\n\n");


/*
        X    Y    Z 
           |    |  
    1      |    |     
       ----|----|----
    2      |    |     
       ----|----|----
    3      |    |     
           |    |  
*/





    }
    


    return 0;

}











