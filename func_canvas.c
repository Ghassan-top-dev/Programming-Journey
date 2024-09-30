#include <stdio.h>



void can(){        
    char hor; 
    int ver; 
    int canvas; 
    int x1 = 0; 
    int x2 = 0; 
    int x3 = 1; 
    int x4 = 0; 
    int x5 = 0; 
    int x6 = 0; 
    int x7 = 2; 
    int x8 = 0; 
    int x9 = 1; 
    int checker0 = 1; 


    if(checker0 == 1){
            printf("    X    Y    Z \n"); checker0 = 0; 
        }
      
        printf("       |    |  \n");
        printf("1%s%s%s%s%s%s",x1 == 1 ?"    X":(x1 == 0 ?"    O": "     ")," |",x2 == 1 ?"  X":(x2 == 0 ?"  O": "   ")," |",x3 == 1 ?"  X":(x3 == 0 ?"  O": "     "),"\n");
        printf("   ----|----|----\n");
        printf("2%s%s%s%s%s%s",x4 == 1 ?"    X":(x4 == 0 ?"    O": "     ")," |",x5 == 1 ?"  X":(x5 == 0 ?"  O": "   ")," |",x6 == 1 ?"  X":(x6 == 0 ?"  O": "     "),"\n");
        printf("   ----|----|----\n");
        printf("3%s%s%s%s%s%s",x7 == 1 ?"    X":(x7 == 0 ?"    O": "     ")," |",x8 == 1 ?"  X":(x8 == 0 ?"  O": "   ")," |",x9 == 1 ?"  X":(x9 == 0 ?"  O": "     "),"\n");
        printf("       |    |  \n");



}


int main(){


    can();


    return 0; 
}








