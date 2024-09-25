#include <stdio.h>
#include <stdbool.h>

int main () {
   int var3;
   bool var4;
   
   int var1 = 5;
   int var2 = 10;
   
   var3 = var1 == var2;
   var4 = var1 == var2;
   
   // test and see what happens if you use the following statements
    // var3 = var1 = var2;
    // var4 = var1 = var2;
   
   printf ("%d\n", var3);
   printf ("%d\n", var4);
   
   return 0;
}
