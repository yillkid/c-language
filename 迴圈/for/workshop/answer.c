#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 0, sum = 0; i <=100; i+=2) {
      sum = sum + i;
      printf("%d\n", sum);
    }

    return 0;
}
