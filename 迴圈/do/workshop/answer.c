#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess, attempts = 0;

    // 設定隨機種子
    srand(time(NULL));

    // 生成隨機數字
    target = rand() % 100 + 1;

    printf("猜數字遊戲開始！猜一個 1 到 100 之間的數字。\n");

    do {
        printf("請輸入你的猜測：");
        scanf("%d", &guess);
        attempts++;

        if (guess > target) {
            printf("猜高了！\n");
        } else if (guess < target) {
            printf("猜低了！\n");
        } else {
            printf("恭喜你猜中了！\n");
            printf("你總共猜了 %d 次。\n", attempts);
        }
    } while (guess != target);

    return 0;
}
