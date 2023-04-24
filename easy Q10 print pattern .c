#include <stdio.h>

int main() {
   int n, i, j;

   printf("Enter the number of lines: ");
   scanf("%d", &n);

   // Loop for printing each line
   for(i=1; i<=n; i++) {
      // Print the ith number
      printf("%d ", i);

      // Print spaces between numbers
      for(j=1; j<=i-2; j++)
         printf(" ");

      // Print the rest of the numbers
      if(i > 1) {
         for(j=1; j<=i; j++)
            printf("%d ", i);
      }

      printf("\n");
   }

   return 0;
}

