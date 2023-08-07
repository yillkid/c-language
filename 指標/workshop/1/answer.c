#include <stdio.h>

int main() {
    int scores[5]; // 儲存五門課程的成績
    int *ptr; // 指向成績陣列的指標
    int total = 0; // 總分

    ptr = scores;

    printf("請輸入五門課程的成績：\n");
    for (int i = 0; i < 5; i++) {
        printf("請輸入第 %d 門課程的成績：", i + 1);
        scanf("%d", ptr);
        total += *ptr;
        ptr++; // 指標移動到下一個位置
    }

    float average = (float)total / 5;

    printf("\n總分：%d\n", total);
    printf("平均分數：%.2f\n", average);

    return 0;
}
