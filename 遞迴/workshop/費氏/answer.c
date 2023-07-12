#include <stdio.h>

int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n = 7;

    for (int i = 1; i <= n; i++) {
        printf("費氏數列第 %d 個數字為：%d\n", i, fibonacci(i));
    }

    return 0;
}
