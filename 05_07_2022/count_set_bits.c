#include <stdio.h>

int main() {
   int n, set_count = 0, unset_count = 0;
   printf("Enter a number to count set and unset bits: ");
   scanf("%d", &n);

   while(n > 0) {
      //Let's check if the last bit is 1 or 0
      if((n & 1 )== 1) { /*& has lower precedence than ==; need to put n&1 in brackets*/
         set_count++;
      } else {
          unset_count++;
      }
      n = n >> 1; //right shift 1 bit to remove last bit which we are done with
   }
   printf("Number of set bits: %d and unset bits: %d \n", set_count, unset_count);

   return 0;
}