#include <stdio.h>

int binarySearchRecursive(int scores[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (scores[mid] == target) {
            return mid + 1; // 回傳目標分數在測驗成績中的排名
        } else if (scores[mid] < target) {
            return binarySearchRecursive(scores, left, mid - 1, target);
        } else {
            return binarySearchRecursive(scores, mid + 1, right, target);
        }
    }

    return -1; // 找不到目標分數，回傳 -1
}

int binarySearch(int scores[], int size, int target) {
    return binarySearchRecursive(scores, 0, size - 1, target);
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

