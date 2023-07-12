#include <stdio.h>

int print_star(int k) {
  int sum = 0;
  for (int i = 1; i <=k; i++)
    printf("*");

  printf("\n");
  return 0;
}

int main() {
  int n, sum = 0;
  scanf("%d", &n);

  for (int i = 1; i <=n; i++)
    print_star(i);
}
