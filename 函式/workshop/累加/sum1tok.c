#include <stdio.h>

int sum1tok(int k) {
  int sum = 0;
  for (int i = 1; i <=k; i++)
    sum += i;
  return sum;
}

int main() {
  int n, sum = 0;
  scanf("%d", &n);

  for (int i = 1; i <=n; i++)
    sum += sum1tok(i);

  printf("Answer = %d", sum); 
}
