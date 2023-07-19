#include <stdio.h>
#include <stdlib.h>

// 節點結構
struct ListNode {
    int val;
    struct ListNode* next;
};

// 新增節點到連結串列尾端
void append(struct ListNode** head, int value) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct ListNode* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// 移除連結串列中第一個遇到的指定整數節點
void remove(struct ListNode** head, int value) {
    if (*head == NULL) {
        printf("連結串列為空，無法移除節點。\n");
        return;
    }

    if ((*head)->val == value) {
        struct ListNode* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    struct ListNode* current = *head;
    while (current->next != NULL && current->next->val != value) {
        current = current->next;
    }

    if (current->next != NULL) {
        struct ListNode* temp = current->next;
        current->next = current->next->next;
        free(temp);
    }
}

// 釋放連結串列的記憶體
void freeLinkedList(struct ListNode* head) {
    while (head != NULL) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct ListNode* head = NULL; // 連結串列的首節點

    append(&head, 1); // 新增節點 1
    append(&head, 2); // 新增節點 2
    append(&head, 3); // 新增節點 3

    // 輸出連結串列內容
    struct ListNode* current = head;
    printf("新增節點後的串列：");
    while (current != NULL) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");

    remove(&head, 2); // 移除節點 2

    // 再次輸出連結串列內容
    current = head;
    printf("移除節點後的串列：");
    while (current != NULL) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");

    // 釋放連結串列的記憶體
    freeLinkedList(head);

    return 0;
}

