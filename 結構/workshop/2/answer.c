#include <stdio.h>
#include <string.h>

#define MAX_DEVICES 10

// 定義 USB 裝置結構
struct USBDevice {
    char name[50];
    int id;
    char model[50];
    int status; // 0 表示裝置未連接，1 表示裝置已連接
};

int main() {
    struct USBDevice devices[MAX_DEVICES];
    int numDevices = 0;
    char command[10];

    printf("歡迎使用 USB 裝置管理程式！\n");
    printf("請輸入以下指令：\n");
    printf("- \"add\"：新增一個 USB 裝置\n");
    printf("- \"remove\"：卸載一個已存在的 USB 裝置\n");
    printf("- \"quit\"：結束程式\n");

    while (1) {
        printf("\n指令：");
        scanf("%s", command);

        if (strcmp(command, "add") == 0) {
            if (numDevices < MAX_DEVICES) {
                struct USBDevice newDevice;

                printf("請輸入 USB 裝置名稱：");
                scanf("%s", newDevice.name);

                printf("請輸入 USB 裝置 ID：");
                scanf("%d", &newDevice.id);

                printf("請輸入 USB 裝置型號：");
                scanf("%s", newDevice.model);

                newDevice.status = 1; // 新增的裝置預設狀態為已連接

                devices[numDevices] = newDevice;
                numDevices++;

                printf("\n成功新增 %s！\n", newDevice.name);
            } else {
                printf("\n已達到最大裝置數量，無法新增。\n");
            }
        } else if (strcmp(command, "remove") == 0) {
            char targetName[50];
            int found = 0;

            printf("請輸入要卸載的 USB 裝置名稱：");
            scanf("%s", targetName);

            for (int i = 0; i < numDevices; i++) {
                if (strcmp(devices[i].name, targetName) == 0) {
                    // 將裝置的狀態設為未連接
                    devices[i].status = 0;
                    found = 1;
                    printf("\n成功卸載 %s！\n", devices[i].name);
                    break;
                }
            }

            if (!found) {
                printf("\n找不到名稱為 %s 的裝置。\n", targetName);
            }
        } else if (strcmp(command, "quit") == 0) {
            printf("程式結束。\n");
            break;
        } else {
            printf("無效的指令，請重新輸入。\n");
        }
    }

    return 0;
}

