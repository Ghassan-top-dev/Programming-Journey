#include <stdio.h>

int main(){

    int numericGrade; 

    printf("Enter a numeric grade in %% between 0 and 100: "); 

    scanf("%d", &numericGrade); 

    if(97 <= numericGrade && numericGrade <= 100){
        printf("Letter Grade is: A+"); 
    } else if(93<= numericGrade && numericGrade <=96){
        printf("Letter Grade is: A");
    } else if(90<= numericGrade && numericGrade <=92){
        printf("Letter Grade is: A-");
    }else if(87<= numericGrade && numericGrade <=89){
        printf("Letter Grade is: B+");
    }else if(83<= numericGrade && numericGrade <=86){
        printf("Letter Grade is: B");
    }else if(80<= numericGrade && numericGrade <=82){
        printf("Letter Grade is: B-");
    }else if(77<= numericGrade && numericGrade <=79){
        printf("Letter Grade is: C+");
    }else if(73<= numericGrade && numericGrade <=76){
        printf("Letter Grade is: C");
    }else if(70<= numericGrade && numericGrade <=72){
        printf("Letter Grade is: C-");
    }else if(67<= numericGrade && numericGrade <=69){
        printf("Letter Grade is: D+");
    }else if(63<= numericGrade && numericGrade <=66){
        printf("Letter Grade is: D");
    }else if(60<= numericGrade && numericGrade <=62){
        printf("Letter Grade is: D-");
    }else if(0<= numericGrade && numericGrade <=59){
        printf("Letter Grade is: F");
    }else{
        printf("ERROR: Grade must be between 0 and 100");
    }


    return 0; 
}
