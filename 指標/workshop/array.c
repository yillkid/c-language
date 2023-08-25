#include <stdio.h>

int main(void) {
    int arr[10] = {0};
    int *p = arr;  // 指標 p 指向整數陣列 arr

    for (int i = 0; i < 10; i++) {
        printf("arr[%d] address: %p and value: %d\n", i, *&p, *p);
        p++;
    }

    return 0;
}
