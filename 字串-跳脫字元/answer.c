#include <stdio.h>

int main() {
    char str[100];
    
    while (1) {
        printf("請輸入一個字串（輸入 \"exit\" 結束）：");
        scanf("%s", str);
        
        int i = 0;
        while (str[i] != '\0') {
            printf("%c\n", str[i]);
            i++;
        }
        printf("\n");
        
        if (str[0] == 'e' && str[1] == 'x' && str[2] == 'i' && str[3] == 't' && str[4] == '\0') {
            printf("程式結束。\n");
            break;
        }
    }
    
    return 0;
}
