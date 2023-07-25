//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "stdio.h"
//#include "math.h"
//int main() {
//    int num1, num2, num3;
//    for (int i = 100; i < 1000; i++) {
//        int tmp = i;
//        num1 = i / 100;
//        num2 = i / 10 % 10;
//        num3 = i % 10;
//        if (tmp == pow(num1, 3) + pow(num2, 3) + pow(num3, 3)) {
//            printf("%d\t", tmp);
//        }
//    }
//    return 0;
//}





#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"

int main() {
    for (int j = 100; j < 201; j++) {
        ;
        int flag = 1;
        for (int i = 2; i < j; i++) {
            if (j % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            printf("%d\t", j);
        }
    }
    return 0;
}