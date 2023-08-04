#define _CRT_SECURE_NO_WARNINGS 1
/*
作业标题(722)
打印水仙花数

作业内容
求出0～100000之间的所有“水仙花数”并输出。

“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。
 */

//#include "stdio.h"
//#include "math.h"
//
// //计算数字位数
//int getDigits(int num) {
//    int digits = 0;
//    while (num != 0) {
//        num /= 10;
//        digits++;
//    }
//    return digits;
//}
//
////判断是否为水仙花数
//int isArmstrong(int num) {
//    int digits = getDigits(num);
//    int temp = num;
//    int sum = 0;
//    while (temp != 0) {
//        int digit = temp % 10;
//        sum += pow(digit, digits);
//        temp /= 10;
//    }
//    if (sum == num) {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//
//int main() {
//    int i;
//    for (i = 0; i <= 100000; i++) {
//        if (isArmstrong(i)) {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}



/*
作业标题(723)
计算求和
作业内容
求Sn=a+aa+aaa+aaaa+aaaaal的前5项之和，其中a是一个数字，
例如：2+22+222+2222+22222
 */

//#include "stdio.h"
//
//void Print_Sn(int num) {
//    int temp = num;
//    int Sn = 0;
//    for (int i = 0; i < 5; ++i) {
//        Sn += temp;
//        temp = temp * 10 + num;
//    }
//    printf("%d", Sn);
//}
//
//int main() {
//    int num = 0;
//    printf("请输入一个一位数字\n");
//    scanf("%d", &num);
//    Print_Sn(num);
//    return 0;
//}





#include <stdio.h>
int main()
{
    int i = 0;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hello bit\n");
     }
    return 0;
}