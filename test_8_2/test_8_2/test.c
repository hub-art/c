#define _CRT_SECURE_NO_WARNINGS 1
/*
��ҵ����(721)
��ӡ����
��ҵ����
��C��������Ļ���������ͼ����
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
    printf("����������\n");
    scanf("%d", &n);
    space = n - 1;
    //����ϰ벿��
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
    //����°벿��
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