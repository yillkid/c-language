#include <stdio.h>

int main(){
  int a, b, c, found = 0;
  scanf("%d%d%d", &a, &b, &c);
  if ((a && b) == c) {
    printf("AND\n");
    found = 1;
  }
  if ((a || b ) == c) {
    printf("OR\n");
    found = 1;
  }
  if (( (a && !b) || (!a && b) ) == c ) {
    printf("XOR\n");
    found = 1;
  }
  if (!found)
    printf("Impossible!\n");

  return 0;
}
