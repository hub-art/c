#define _CRT_SECURE_NO_WARNINGS 1
/*
作业标题(721)
打印菱形
作业内容
用C语言在屏幕上输出以下图案：
                        *
                    *	*	*
                *	*	*	*	*
            *	*	*	*	*	*	*
        *	*	*	*	*	*	*	*	*
    *	*	*	*	*	*	*	*	*	*	*
*	*	*	*	*	*	*	*	*	*	*	*	*
    *	*	*	*	*	*	*	*	*	*	*
        *	*	*	*	*	*	*	*	*
            *	*	*	*	*	*	*
                *	*	*	*	*
                    *	*	*
                        *

 */

#include "stdio.h"

int main() {
    int space, i, j, n;
    printf("请输入行数\n");
    scanf("%d", &n);
    space = n - 1;
    //输出上半部分
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= space; j++) {
            printf("  ");
        }
        space--;
        for (j = 1; j <= (2 * i) - 1; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    space = 1;
    //输出下半部分
    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= space; j++) {
            printf("  ");
        }
        space++;

        for (j = 1; j <= 2 * (n - i) - 1; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}