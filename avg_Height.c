#include <stdio.h>

int main(){

    int numStudents, stuHeight; 
    int sum = 0; 
    float avg; 
    printf("I will return average height \n");
    printf("Enter how many students there are: ");

    scanf("%d", &numStudents); 

    int arr[numStudents]; 


    printf("Enter student heights (in cm): ");

    for (stuHeight = 0; stuHeight < numStudents; stuHeight++)
    {

        scanf("%d", &arr[stuHeight]); 

        sum = sum + arr[stuHeight]; 

    }

    avg = (float)sum; 

    avg =  avg / numStudents; 

    printf("The average height of students in the classroom is: %f", avg); 
    


    return 0; 

}
