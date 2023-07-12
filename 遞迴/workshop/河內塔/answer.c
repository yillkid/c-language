#include <stdio.h>

void hanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        printf("移動盤子 1 從柱子 %c 到柱子 %c\n", source, destination);
        return;
    }

    hanoi(n - 1, source, auxiliary, destination);
    printf("移動盤子 %d 從柱子 %c 到柱子 %c\n", n, source, destination);
    hanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n = 3;
    printf("將 %d 個盤子從柱子 A 移動到柱子 C：\n", n);
    hanoi(n, 'A', 'C', 'B');

    return 0;
}
