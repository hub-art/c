#define _CRT_SECURE_NO_WARNINGS 1



/*
描述
KiKi有一个矩阵，他想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵），请编程帮他解答。

输入描述：
第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。 (1≤n≤10,1≤m≤10)

从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，表示第一个矩阵中的元素。

输出描述：
输出m行n列，为矩阵转置后的结果。每个数后面有一个空格。
*/


//#include <stdio.h>
//
//int main() {
//    int arr[10][10];
//    int n, m;
//    scanf("%d %d\n", &n, &m);
//    for (int j = 0; j < n; j++) {
//        for (int i = 0; i < m; i++) {
//            scanf("%d", &arr[j][i]);
//        }
//    }
//    for (int j = 0; j < m; j++) {
//        for (int i = 0; i < n; i++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


/*
 作业标题(696)
【一维数组】交换数组
史
作业内容
将数组A中的内容和数组B中的内容进行交换。（数组一样大）
 */


 //#include "stdio.h"
 //
 //int main(){
 //    int A[] = {0,1,2,3,4,5,6,7,8,9,10};
 //    int B[] = {00,11,22,33,44,55,66,77,88,99,110};
 //
 //    //计算数组长度
 //    int n = sizeof(A)/sizeof (A[0]);
 //    //定义一个临时数组来作中间商
 //    int tmp[n];
 //    //遍历数组，把数组A放入临时数组中
 //    for (int i = 0; i < sizeof(A) / sizeof(A[0]); ++i){
 //        tmp[i] = A[i];
 //    }
 //    //遍历数组，把数组B的内容放到A中
 //    for (int i = 0; i < sizeof(A) / sizeof(A[0]); ++i){
 //        A[i] = B[i];
 //        B[i] = tmp[i];
 //    }
 //    for (int i = 0; i < sizeof(A) / sizeof(A[0]); ++i){
 //        printf("A[%d] = %d\n",i,A[i]);
 //    }
 //    for (int i = 0; i < sizeof(B) / sizeof(B[0]); ++i){
 //        printf("B[%d] = %d\n",i,B[i]);
 //    }
 //    return 0;
 //}


/*
【今日题目】：
请实现以下三个数组操作的函数：
1.请实现GetMaxValOfArrayi函数，该函数接收
一个整形数组，及元素个数，功能求数组中元素
最大值并返回
2.请实现GetMinValOfArray函数，该函数接收
一个整形数组，及元素个数，功能求数组中元素
最小值并返回
3.请实现函数PrintArray,打印数组中所有元素
 */


//#include "stdio.h"
//
//int GetMaxValOfArray(int arr[], int num) {
//    int max = arr[0];
//    for (int i = 0; i < num - 1; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    return max;
//}
//
//
//int GetMinValOfArray(int arr[], int num) {
//    int min = arr[0];
//    for (int i = 0; i < num - 1; i++) {
//        if (arr[i] < min) {
//            min = arr[i];
//        }
//    }
//    return min;
//}
//
//
//void PrintArray(int arr[], int num) {
//    for (int i = 0; i < num; i++) {
//        printf("%d\t", arr[i]);
//    }
//}
//
//int main() {
//    int arr1[] = { 3, 2, 5, 6, 1 };
//    int num = sizeof(arr1) / sizeof(arr1[0]);
//    int max = GetMaxValOfArray(arr1, num);
//    printf("最大值为：%d\n", max);
//
//    int min = GetMinValOfArray(arr1, num);
//    printf("最小值为：%d\n", min);
//
//    PrintArray(arr1, num);
//    return 0;
//}






/*
作业标题(656)
最大公约数

作业内容
给定两个数，求这两个数的最大公约数

例如：
输入：20 40
输出：20
 */


//#include "stdio.h"
//
//int main() {
//    int num1, num2;
//    int tmp = 0;
//    int gcd = 0;
//    printf("请输入两个数\n");
//    scanf("%d %d", &num1, &num2);
//    if (num1 > num2) {
//        tmp = num1;
//    }
//    else {
//        tmp = num2;
//    }
//    for (int i = 1; i <= tmp; i++) {
//        if (num1 % i == 0 && num2 % i == 0) {
//            gcd = i;
//        }
//    }
//    printf("%d和%d的最大公约数是:%d", num1, num2, gcd);
//
//    return 0;
//}





/*
作业标题(655)
打印闰年

作业内容
打印1000年到2000年之间的闰年
 */


#include "stdio.h"
int main() {
    for (int year = 1000; year <= 2000; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            printf("%d ", year);
        }
    }
    return 0;
}