/*THIS IS FOR IN CLASS LECTURE*/



#include <stdio.h>




int main(){

float height;
float sum = 0.0; 
float average;

while(height > 0){

    sum = sum + height; 

    printf("Enter height: ");
    scanf("%f", &height);

}

average = sum / height;
printf("%f", sum); 

    return 0; 
}
