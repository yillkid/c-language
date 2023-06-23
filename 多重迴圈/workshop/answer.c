#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, i, j, space;

    printf("請輸入星星塔的層數：");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // 輸出空格
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // 輸出星星
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
