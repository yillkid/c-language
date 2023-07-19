#include <stdio.h>

int linearSearch(int productIds[], int size, int targetId) {
    for (int i = 0; i < size; i++) {
        if (productIds[i] == targetId) {
            return 1; // 目標商品編號存在於商品列表中
        }
    }
    return 0; // 目標商品編號不存在於商品列表中
}

int main() {
    int productIds[] = {101, 205, 309, 410, 512};
    int size = sizeof(productIds) / sizeof(productIds[0]);
    int targetId = 410;

    int result = linearSearch(productIds, size, targetId);
    if (result) {
        printf("目標商品編號 %d 存在於商品列表中\n", targetId);
    } else {
        printf("目標商品編號 %d 不存在於商品列表中\n", targetId);
    }

    return 0;
}
