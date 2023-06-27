#include <stdio.h>

int main() {
    int numbers[3];
    int i;
    int max, min;

    for (i = 0; i < 3; i++) {
        printf("請輸入第 %d 個數字：", i + 1);
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];
    min = numbers[0];

    for (i = 1; i < 3; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    printf("最大值為：%d\n", max);
    printf("最小值為：%d\n", min);

    return 0;
}
