#include <stdio.h>

// 定義學生結構
struct Student {
    int englishScore;
    int mathScore;
};

int main() {
    int numStudents = 3;
    struct Student students[numStudents];
    float totalEnglishScore = 0.0, totalMathScore = 0.0;

    // 輸入每位學生的成績
    for (int i = 0; i < numStudents; i++) {
        printf("請輸入第 %d 位學生的英文成績：", i + 1);
        scanf("%d", &students[i].englishScore);

        printf("請輸入第 %d 位學生的數學成績：", i + 1);
        scanf("%d", &students[i].mathScore);

        totalEnglishScore += students[i].englishScore;
        totalMathScore += students[i].mathScore;
    }

    // 計算並輸出全班的總平均
    printf("\n全班總平均：\n");
    printf("英文成績： %.6f\n", totalEnglishScore / numStudents);
    printf("數學成績： %.6f\n", totalMathScore / numStudents);

    return 0;
}
