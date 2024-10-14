#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
//canvas gets printed at the beginning of the game
        printf("\n\n\n");
        printf("      |    |  \n");
        printf("   1  |  2 |  3\n");
        printf("  ----|----|----\n");
        printf("   4  |  5 |  6\n");
        printf("  ----|----|----\n");
        printf("   7  |  8 |  9\n");
        printf("      |    |  \n");
        printf("\n\n\n");
   //variables here
    int i, userChoice; 
    char choiceXO; 
    char arr[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; //this one is for the current positions and their status
    int size = sizeof(arr) / sizeof(arr[0]); //Gets size of array?
    int turns, whoStart = 0; //this governs turns
    int randomIndexCh;
    int randomIndex;
    srand(time(0)); //initalizes the time

    printf("Would you like to go first (1) or the computer (0): ");
    scanf("%d", &whoStart);
    
    turns = whoStart; //whoStart is weather you are X or O, turns is who's turn it is

    //main for loop where shit goes down
    for (i = 0; i < 9; i++)
    {
      //if the player chooses to go first
      if (whoStart == 1)
        {
            //if it is the players turn
           if(turns == 1){

                printf("Enter your choice of position 1-9: ");
                scanf("%d", &userChoice);   

                arr[userChoice - 1] = 'X';

                turns = 0; 
                printf("Player Choie...");
           }
           //if it is the computers turn
           else{
            randomIndex = rand() % size;

            while (arr[randomIndex] != ' ') //This will choose an availabe choice
            {
                randomIndex = rand() % size; //This will choose the '-' if its not chosen yet
            }
            
            arr[randomIndex] = 'O';   //This will set the chosen '-' to either X or O
            turns = 1; 

            printf("Computer Choie...");

           }
                               
        }
        //if the player chooses the computer goes first
        else{
            //if it is the computers turn
            if(turns == 0){

                randomIndex = rand() % size;

                while (arr[randomIndex] != ' ') //This will choose an availabe choice
                {
                    randomIndex = rand() % size; //This will choose the '-' if its not chosen yet
                }
                
                arr[randomIndex] = 'X';   //This will set the chosen '-' to either X or O
                turns = 1; 

                printf("Computer Choie...");
           }
           //if it is the players turn
           else{
                printf("Enter your choice of position 1-9: ");
                scanf("%d", &userChoice);   

                arr[userChoice - 1] = 'O';

                turns = 0; 
                printf("Player Choie...");
           }

        }
        //shitty canavs with choices here... took ages
        printf("\n\n\n");
        printf("        |      |  \n");
        printf("     %c  |  %c   | %c \n", arr[0], arr[1], arr[2]);
        printf("    ----|------|----\n");
        printf("     %c  |  %c   | %c \n", arr[3], arr[4], arr[5]);
        printf("    ----|------|----\n");
        printf("     %c  |  %c   | %c \n", arr[6], arr[7], arr[8]);
        printf("        |      |  \n");
        printf("\n\n\n");




        /*BULLSHIT BELOW
        /*FOR X HORIZANTAL*/
        
        /*FOR X FIRST ROW*/

        if (arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE COMPUTER WINS :( \n\n\n");
            }

            exit(1); 
        }
        /*FOR X SECOND ROW*/

        else if (arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE COMPUTER WINS :( \n\n\n");
            }

            exit(1); 
        }
        /*FOR X THIRD ROW*/

        else if (arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE COMPUTER WINS :( \n\n\n");
            }

            exit(1); 
        }
        
        /*FOR X VERTICAL*/

        /*FOR X FIRST COLOUMN*/



        if (arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE COMPUTER WINS :( \n\n\n");
            }

            exit(1); 
        }

        /*FOR X SECOND COLOUMN*/

        else if (arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE COMPUTER WINS :( \n\n\n");
            }

            exit(1); 
        }

        /*FOR X THIRD COLOUMN*/

        else if (arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE COMPUTER WINS :( \n\n\n");
            }

            exit(1); 
        }

        /*FOR X DIAGONAL*/

        /*FOR X TOP LEFT TO BOTTOM RIGHT*/


        if (arr[0] == 'X' && arr[4] == 'X' && arr[8] == 'X' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE COMPUTER WINS :( \n\n\n");
            }

            exit(1); 
        }
        /*FOR X TOP RIGHT TO BOTTOM LEFT*/

        if (arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE COMPUTER WINS :( \n\n\n");
            }

            exit(1); 
        }
        

        /*FOR O HORIZANTAL*/
        
        /*FOR O FIRST ROW*/

        if (arr[0] == 'O' && arr[1] == 'O' && arr[2] == 'O' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE COMPUTER WINS :(");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            exit(1); 
        }


         /*FOR O SECOND ROW*/

        if (arr[3] == 'O' && arr[4] == 'O' && arr[5] == 'O' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE COMPUTER WINS :(");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            exit(1); 
        }

        /*FOR O THIRD ROW*/

        if (arr[6] == 'O' && arr[7] == 'O' && arr[8] == 'O' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE COMPUTER WINS :(");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            exit(1); 
        }

        /*FOR O VERTICAL*/

        /*FOR O FIRST COLOUMN*/

        if (arr[0] == 'O' && arr[3] == 'O' && arr[6] == 'O' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE COMPUTER WINS :(");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            exit(1); 
        }

        /*FOR O SECOND COLOUMN*/

        if (arr[1] == 'O' && arr[3] == 'O' && arr[7] == 'O' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE COMPUTER WINS :(");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            exit(1); 
        }

        /*FOR O THIRD COLOUMN*/

        if (arr[2] == 'O' && arr[5] == 'O' && arr[8] == 'O' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE COMPUTER WINS :(");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            exit(1); 
        }

        /*FOR O DIAGONAL*/

        /*FOR O TOP LEFT TO BOTTOM RIGHT*/
        if (arr[0] == 'O' && arr[4] == 'O' && arr[8] == 'O' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE COMPUTER WINS :(");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            exit(1); 
        }

        /*FOR O TOP RIGHT TO BOTTOM LEFT*/

        if (arr[2] == 'O' && arr[4] == 'O' && arr[6] == 'O' )
        {
            if(whoStart == 1){
                printf("\n\n\nTHE COMPUTER WINS :(");
            }

            if(whoStart == 0){
                printf("\n\n\nTHE PLAYER WINS!!!");
            }

            exit(1); 
        }



    }
    //if your a peanut and you tie with the computer...
    printf("\n\n\nIt is a tie");

    
    return 0;

}
