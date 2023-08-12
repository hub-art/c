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

//#include "stdio.h"
//
//int Fib(int num) {
//    int num1, num2, num3;
//    num1 = num2 = 1;
//    while (num > 2) {
//        num--;
//        num3 = num2;
//        num2 = num1;
//        num1 = num2 + num3;
//    }
//    return num1;
//}
//
//int main() {
//    int num = 0;
//    printf("请输入一个数\n");
//    scanf("%d", &num);
//    printf("%d", Fib(num));
//    return 0;
//}





/*
 * 8作业标题(682)
递归实现n的k次方
四作业内容
编写一个函数实现的K次方，使用递归实现。
 */

//#include "stdio.h"
//
//int power_recursive(int n, int k) {
//    if (k == 0) {
//        return 1;
//    }
//    else {
//        return n * power_recursive(n, k - 1);
//    }
//}
//
//int main() {
//    int num = power_recursive(2, 4);
//    printf("%d", num);
//    return 0;
//}



/*
 * 8作业标题(683)
计算一个数的每位之和（递归实现）
作业内容
写一个递归函数DigitSum(),输入一个非负整数，返回组成它的数字之和
例如，调用DigitSum(1729),则应该返回1+7+2+9，它的和是19
输入：1729，输出：19
 */

//#include "stdio.h"
//
//int DigitSum(int num) {
//    if (num == 0) {
//        return num;
//    }
//    else {
//        int digit = num % 10;
//        num /= 10;
//        return digit + DigitSum(num);
//    }
//}
//
//int main() {
//    int num = 0;
//    printf("请输入一个非负整数\n");
//    scanf("%d", &num);
//    int sum = DigitSum(num);
//    printf("%d", sum);
//    return 0;
//}



/*
 * 作业标题(686)
求阶乘
四作业内容
递归和非递归分别实现求的阶乘（不考虑溢出的问题）
 */

#include "stdio.h"

int factorial_recursive(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    else {
        return num * factorial_recursive(num - 1);
    }
}

int main() {
    int num = 0;
    printf("请输入一个数\n");
    scanf("%d", &num);
    int factorial = factorial_recursive(num);
    printf("%d的阶乘是%d", num, factorial);
    return 0;
}