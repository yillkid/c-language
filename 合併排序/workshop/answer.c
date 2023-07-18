#include <stdio.h>

void merge(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i = nums1Size - 1;
    int j = nums2Size - 1;
    int k = nums1Size + nums2Size - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] >= nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // 將 nums2 中剩餘的元素複製到 nums1 中
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main() {
    int nums1[6] = {1, 3, 5};
    int nums2[3] = {2, 4, 6};
    int nums1Size = 3;
    int nums2Size = 3;

    merge(nums1, nums1Size, nums2, nums2Size);

    printf("合併後的數列：");
    for (int i = 0; i < nums1Size + nums2Size; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    return 0;
}

