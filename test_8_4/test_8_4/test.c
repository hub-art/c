#define _CRT_SECURE_NO_WARNINGS 1
//#include "stdio.h"
//
//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//
//int main() {
//    printf("%d", Fun(2));
//    return 0;
//}


/*
作业标题(681)
计算斐波那契数
作业内容
递归和非递归分别实现求第n个斐波那契数
例如：
输入：5  输出：5
输入：10， 输出：55
输入：2， 输出：1
 */

 /*
 int Fib(int num) {
     if (num <= 2) {
         return 1;
     } else {
         return Fib(num - 1) + Fib(num - 2);
     }
 }

 #include "stdio.h"

 int main() {
     int ret = 0;
     printf("请输入一个数\n");
     scanf("%d",&ret);
     printf("%d", Fib(ret));
     return 0;
 }
  */

#include "stdio.h"

int Fib(int num) {
    int num1, num2, num3;
    num1 = num2 = 1;
    while (num > 2) {
        num--;
        num3 = num2;
        num2 = num1;
        num1 = num2 + num3;
    }
    return num1;
}

int main() {
    int num = 0;
    printf("请输入一个数\n");
    scanf("%d", &num);
    printf("%d", Fib(num));
    return 0;
}