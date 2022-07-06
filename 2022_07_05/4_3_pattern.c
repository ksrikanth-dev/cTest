

C Program to Print Pyramids and Patterns
In this example, you will learn to print half pyramids, inverted pyramids, full pyramids, inverted full pyramids, Pascal's triangle, and Floyd's triangle in C Programming.

To understand this example, you should have the knowledge of the following C programming topics:

C if...else Statement
C for Loop
C while and do...while Loop
C break and continue
Here is a list of programs you will find in this page.

C Examples
Half pyramid of *
Half pyramid of numbers
Half pyramid of alphabets
Inverted half pyramid of *
Inverted half pyramid of numbers
Full pyramid of *
Full pyramid of numbers
Inverted full pyramid of *
Pascal's triangle
Floyd's triangle
Example 1: Half Pyramid of *
*
* *
* * *
* * * *
* * * * *
C Program

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
Run Code
Example 2: Half Pyramid of Numbers
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
C Program

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}
Run Code
Example 3: Half Pyramid of Alphabets
A
B B
C C C
D D D D
E E E E E
C Program

#include <stdio.h>
int main() {
   int i, j;
   char input, alphabet = 'A';
   printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%c", &input);
   for (i = 1; i <= (input - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
   return 0;
}
Run Code
Example 4: Inverted half pyramid of *
* * * * *
* * * *
* * * 
* *
*
C Program

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
Run Code
Example 5: Inverted half pyramid of numbers
1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1
C Program

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}
Run Code
Example 6: Full Pyramid of *
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
C Program

#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}



/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/