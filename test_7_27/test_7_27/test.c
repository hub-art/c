#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//    int arr[10];
//    int sum = 0;
//    float average;
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &arr[i]);
//        sum += arr[i];
//    }
//    average = (float)sum / 10;
//    printf("%.2f", average);
//    return 0;
//}



//#include "stdio.h"
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int a[100][100] = { 0 };
//    int i = 0;
//    for (int i = 0; i < n; i++) {
//        int j = 0;
//        for (int j = 0; j <= i; j++) {
//            if (j == 0 || i == 0) {
//                a[i][j] = 1;
//            }
//            else {
//                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//            }
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        int j = 0;
//        for (int j = 0; j <= i; j++) {
//            printf("%5d", a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}




/*
    ����ϿεĲ�������Ϸ
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void game() {
    int r = rand() % 100 + 1;
    int guess = 0;
    int count = 5;
    while (count) {
        printf("\n�㻹��%d�λ���", count);
        printf("������²������-->��\n");
        printf("�㻹��%d�λ���\n", count);
        scanf("%d", &guess);
        if (guess > r) {
            printf("����\n");
        }
        else if (guess < r) {
            printf("С��\n");
        }
        else {
            printf("��ϲ�㣬�¶���\n");
            break;
        }
        count--;
    }
    if (count == 0) {
        printf("��ʧ���ˣ���ȷ����:%d\n", r);
    }
}

void menu() {
    printf("**************************\n");
    printf("******  1.play  **********\n");
    printf("******  0.exit  **********\n");
    printf("**************************\n");
}



int main() {
    srand((unsigned int)time(NULL));
    int input = 0;
    do {
        menu();
        printf("��ѡ��-->:\n");
        scanf("%d", &input);
        switch (input) {
        case 1:
            game();
            break;
        case 0:
            printf("��Ϸ����\n");
            break;
        default:
            printf("ѡ���������������\n");
            break;
        }
    } while (input);
    return 0;
}