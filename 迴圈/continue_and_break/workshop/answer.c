#include <stdio.h>
#include <stdlib.h>

int main() {
    int value = 0, sum = 0;

    while (1) {
      if (value > 100) {
        break;
      }

      value ++;
      
      if (value %2 == 0) {
        sum = sum + value;
	continue;
      }
    }

   printf("%d", sum); 
   return 0;
}
