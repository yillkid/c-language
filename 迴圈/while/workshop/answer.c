#include <stdio.h>
#include <stdlib.h>

int main()
{
  int value = 0;
  int sum = 0;
  while (value <= 100) {
    if (value % 2 == 0)
      sum = sum + value;
    
    value ++;
  }
  printf("%d", sum);
  return 0;
}
