#include <stdio.h>

int binarySearch(int scores[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (scores[mid] == target) {
            return mid + 1; // 回傳目標分數在測驗成績中的排名
        } else if (scores[mid] < target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return -1; // 找不到目標分數，回傳 -1
}

int main() {
    int scores[] = {95, 88, 78, 65, 60, 55, 50};
    int size = sizeof(scores) / sizeof(scores[0]);
    int target = 65;

    int result = binarySearch(scores, size, target);
    if (result != -1) {
        printf("目標分數 %d 在測驗成績中排第 %d 名\n", target, result);
    } else {
        printf("找不到目標分數 %d\n", target);
    }

    return 0;
}

