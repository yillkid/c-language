#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess;
    
    // 設定隨機種子
    srand(time(NULL));

    // 生成隨機數字
    target = rand() % 100 + 1;

    printf("猜數字遊戲開始！猜一個 1 到 100 之間的數字。\n");

    while (scanf("%d", &guess) && guess != target) {
        if (guess > target) {
            printf("猜高了！再猜一次：\n");
        } else {
            printf("猜低了！再猜一次：\n");
        }
    }

    printf("恭喜你猜中了！答案是 %d。\n", target);
    printf("遊戲結束。\n");

    return 0;
}
