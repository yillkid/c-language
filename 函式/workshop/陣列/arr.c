#include <stdio.h>

void set_array_zero(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = 5;//sizeof(numbers) / sizeof(numbers[0]);

    printf("原始陣列：\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    set_array_zero(numbers, size);

    printf("設定為 0 後的陣列：\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
