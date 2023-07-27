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
    完成上课的猜数字游戏
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
        printf("\n你还有%d次机会", count);
        printf("请输入猜测的数字-->：\n");
        printf("你还有%d次机会\n", count);
        scanf("%d", &guess);
        if (guess > r) {
            printf("大了\n");
        }
        else if (guess < r) {
            printf("小了\n");
        }
        else {
            printf("恭喜你，猜对了\n");
            break;
        }
        count--;
    }
    if (count == 0) {
        printf("你失败了，正确答案是:%d\n", r);
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
        printf("请选择-->:\n");
        scanf("%d", &input);
        switch (input) {
        case 1:
            game();
            break;
        case 0:
            printf("游戏结束\n");
            break;
        default:
            printf("选择错误，请重新输入\n");
            break;
        }
    } while (input);
    return 0;
}