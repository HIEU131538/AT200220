#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char ten[100];
    int tuoi;
    double gpa;
    struct node *next;
};

typedef struct node node;

node *makeNode() {
    node *newNode = (node*)malloc(sizeof(node));
    printf("Nhap ten: ");
    scanf(" %[^\n]", newNode->ten);
    printf("Nhap tuoi: ");
    scanf("%d", &(newNode->tuoi));
    printf("Nhap GPA: ");
    scanf("%lf", &(newNode->gpa));
    newNode->next = NULL;
    return newNode;
}

void in(node *head) {
    printf("\n%-5s %-20s %-10s %-10s\n", "STT", "HOTEN", "TUOI", "DIEM TB");
    int stt = 1;
    while (head != NULL) {
        printf("%-5d %-20s %-10d %-10.2lf\n", stt++, head->ten, head->tuoi, head->gpa);
        head = head->next;
    }
}

void pushF(node **head) {
    node *newNode = makeNode();
    newNode->next = *head;
    *head = newNode;
}

void chentruoc(node **head, char name[]) {
    node *newNode = makeNode();
    if (*head == NULL || strcmp((*head)->ten, name) == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    node *tmp = *head;
    node *pre = NULL;
    while (tmp != NULL && strcmp(tmp->ten, name) != 0) {
        pre = tmp;
        tmp = tmp->next;
    }
    if (tmp != NULL) {
        pre->next = newNode;
        newNode->next = tmp;
    } else {
        printf("KHONG TIM THAY SINH VIEN\n");
        free(newNode);
    }
}

void Xoasinhvien(node **head, char name[]) {
    while (*head != NULL && strcmp((*head)->ten, name) == 0) {
        node *tmp = *head;
        *head = (*head)->next;
        free(tmp);
    }

    node *tmp = *head;
    node *pre = NULL;
    while (tmp != NULL) {
        if (strcmp(tmp->ten, name) == 0) {
            pre->next = tmp->next;
            free(tmp);
            tmp = pre->next;
        } else {
            pre = tmp;
            tmp = tmp->next;
        }
    }
}

int main() {
    node *head = NULL;
    while (1) {
        printf("\n-----------------------\n");
        printf("1. Them vao dau\n");
        printf("2. Xoa sinh vien theo ten\n");
        printf("3. Duyet danh sach\n");
        printf("4. Chen sinh vien truoc ten\n");
        printf("0. Thoat\n");
        printf("------------------------\n");
        printf("Nhap lua chon: ");
        int lc;
        scanf("%d", &lc);
        getchar();

        if (lc == 1) {
            pushF(&head);
        } else if (lc == 2) {
            char name[100];
            printf("TEN SINH VIEN CAN XOA: ");
            scanf(" %[^\n]", name);
            Xoasinhvien(&head, name);
        } else if (lc == 3) {
            in(head);
        } else if (lc == 4) {
            char name[100];
            printf("TEN SINH VIEN CAN CHEN TRUOC: ");
            scanf(" %[^\n]", name);
            chentruoc(&head, name);
        } else if (lc == 0) break;
    }
    return 0;
}
