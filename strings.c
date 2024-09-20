#include <stdio.h>

int main() {
  char carName[55];
  int i;

  printf("enter a number: "); 

  scanf("%s", &carName); 


  
  for (i = 0; i < 5; ++i) {
    printf("%c\n", carName[i]);
  }

  return 0;
}
