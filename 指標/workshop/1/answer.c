#include <stdio.h>

// 定義最大陣列大小
#define MAX_SIZE 100

// 新增元素到動態陣列尾端
void append(int* array[], int* size, int value) {
    // 當動態陣列已滿，不再新增元素
    if (*size >= MAX_SIZE) {
        printf("動態陣列已滿，不可新增元素。\n");
        return;
    }

    (*array)[*size] = value;
    (*size)++;
}

int main() {
    int dynamicArray[MAX_SIZE]; // 動態陣列的起始位址
    int arraySize = 0; // 動態陣列的大小

    append(&dynamicArray, &arraySize, 1); // 新增元素 1
    append(&dynamicArray, &arraySize, 2); // 新增元素 2
    append(&dynamicArray, &arraySize, 3); // 新增元素 3

    // 輸出動態陣列內容
    printf("動態陣列：");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    return 0;
}
