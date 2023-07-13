#include <stdio.h>

#define SIZE 8

int board[SIZE][SIZE];

// 檢查是否可以放置皇后於指定位置
int canPlace(int row, int col) {
    int i, j;

    // 檢查同一列是否已有皇后
    for (i = 0; i < row; i++) {
        if (board[i][col] == 1) {
            return 0;
        }
    }

    // 檢查左上對角線是否有皇后
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return 0;
        }
    }

    // 檢查右上對角線是否有皇后
    for (i = row, j = col; i >= 0 && j < SIZE; i--, j++) {
        if (board[i][j] == 1) {
            return 0;
        }
    }

    return 1;
}

// 尋找八皇后解答的遞迴函式
int eightQueens(int row) {
    int col;

    // 遞迴基案：所有行都已檢查完，找到一個解答
    if (row == SIZE) {
        return 1;
    }

    for (col = 0; col < SIZE; col++) {
        // 檢查是否可以放置皇后於該位置
        if (canPlace(row, col)) {
            // 放置皇后
            board[row][col] = 1;

            // 遞迴尋找下一行的解答
            if (eightQueens(row + 1)) {
                return 1;
            }

            // 如果無法找到解答，移除該皇后，繼續嘗試下一列
            board[row][col] = 0;
        }
    }

    return 0;
}

int main() {
    // 初始化棋盤
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = 0;
        }
    }

    // 呼叫遞迴函式尋找解答
    eightQueens(0);

    // 輸出結果
    printf("一種合法的八皇后放置方式如下：\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 1) {
                printf("Q ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }

    return 0;
}
