#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "math.h"
int main() {
    int num1, num2, num3;
    for (int i = 100; i < 1000; i++) {
        int tmp = i;
        num1 = i / 100;
        num2 = i / 10 % 10;
        num3 = i % 10;
        if (tmp == pow(num1, 3) + pow(num2, 3) + pow(num3, 3)) {
            printf("%d\t", tmp);
        }
    }
    return 0;
}