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
��ҵ����(681)
����쳲�������
��ҵ����
�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
���磺
���룺5  �����5
���룺10�� �����55
���룺2�� �����1
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
     printf("������һ����\n");
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
//    printf("������һ����\n");
//    scanf("%d", &num);
//    printf("%d", Fib(num));
//    return 0;
//}





/*
 * 8��ҵ����(682)
�ݹ�ʵ��n��k�η�
����ҵ����
��дһ������ʵ�ֵ�K�η���ʹ�õݹ�ʵ�֡�
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
 * 8��ҵ����(683)
����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
��ҵ����
дһ���ݹ麯��DigitSum(),����һ���Ǹ����������������������֮��
���磬����DigitSum(1729),��Ӧ�÷���1+7+2+9�����ĺ���19
���룺1729�������19
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
//    printf("������һ���Ǹ�����\n");
//    scanf("%d", &num);
//    int sum = DigitSum(num);
//    printf("%d", sum);
//    return 0;
//}



/*
 * ��ҵ����(686)
��׳�
����ҵ����
�ݹ�ͷǵݹ�ֱ�ʵ����Ľ׳ˣ���������������⣩
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
    printf("������һ����\n");
    scanf("%d", &num);
    int factorial = factorial_recursive(num);
    printf("%d�Ľ׳���%d", num, factorial);
    return 0;
}