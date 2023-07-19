#include <stdio.h>
#include <string.h>

// 定義結構 Student
struct Student {
    char name[50];
    int score;

    // 加分函式
    void (*addBonus)(struct Student* student, int bonus);
};

// 加分函式的實作
void addBonus(struct Student* student, int bonus) {
    student->score += bonus;
}

int main() {
    // 建立結構變數
    struct Student students[3];

    // 初始化結構成員
    for (int i = 0; i < 3; i++) {
        printf("請輸入學生%d的姓名：", i + 1);
        scanf("%s", students[i].name);

        printf("請輸入學生%d的原始分數：", i + 1);
        scanf("%d", &students[i].score);

        students[i].addBonus = addBonus; // 初始化函式指標
    }

    // 使用函式指標呼叫加分函式
    for (int i = 0; i < 3; i++) {
        students[i].addBonus(&students[i], 15); // 給每個學生加分
    }

    // 輸出每個學生的姓名和加分後的分數
    for (int i = 0; i < 3; i++) {
        printf("學生%d的姓名：%s，加分後分數：%d\n", i + 1, students[i].name, students[i].score);
    }

    return 0;
}

