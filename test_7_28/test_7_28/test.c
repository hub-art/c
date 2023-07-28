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


//#include "stdio.h"
//int main() {
//    for (int year = 1000; year <= 2000; year++) {
//        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//            printf("%d ", year);
//        }
//    }
//    return 0;
//}






/*
描述
KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的“空心”正方形图案。
输入描述：
多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“*”的数量。
输出描述：
针对每行输入，输出用“*”组成的“空心”正方形，每个“*”后面有一个空格。
示例1
输入：
4
输出：
* * * *
*     *
*     *
* * * *

示例2
输入：
5输出：
* * * * *
*       *
*       *
*       *
* * * * *
*/



//#include <stdio.h>
//
//void print(int num) {
//    int j, i;
//    for (j = 0; j < num; j++) {
//        for (i = 0; i < num; i++) {
//            if (j == 0 || i == 0 || j == num - 1 || i == num - 1) {
//                printf("* ");
//            }
//            else {
//                printf("  ");
//            }
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int num;
//    while (scanf("%d", &num) != EOF) {
//        print(num);
//    }
//    return 0;
//}





/*
描述
KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的X形图案。
输入描述：
多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
输出描述：
针对每行输入，输出用“*”组成的X形图案。

示例1
输入：
5输出：
*   *
 * *
  *
 * *
*   *
示例2
输入：
6输出：
*    *
 *  *
  **
  **
 *  *
*    *
*/



//#include <stdio.h>
//
//void print(int num) {
//    int j, i;
//    for (j = 0; j < num; j++) {
//        for (i = 0; i < num; i++) {
//            if (j == i || (j + i == num - 1)) {
//                printf("*");
//            }
//            else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//
//}
//
//int main() {
//    int num;
//    while (scanf("%d", &num) != EOF) {
//        print(num);
//    }
//    return 0;
//}





/*
描述
输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数。
输入描述：
一行，输入10个整数（范围-231~231-1），用空格分隔。
输出描述：
一行，逆序输出输入的10个整数，用空格分隔。
示例1
输入：
1 2 3 4 5 6 7 8 9 10
复制
输出：
10 9 8 7 6 5 4 3 2 1
*/

//#include <stdio.h>
//
//int main() {
//    int arr[10];
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = sizeof(arr) / sizeof(arr[0]) - 1; i >= 0; i--) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}




/*
描述
输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
数据范围： 1 \le n, m \le 1000 \1≤n,m≤1000  ， 序列中的值满足 0 \le val \le 30000 \0≤val≤30000
输入描述：
输入包含三行，
第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
第二行包含n个整数，用空格分隔。
第三行包含m个整数，用空格分隔。
输出描述：
输出为一行，输出长度为n+m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
示例1
输入：
5 6
1 3 7 9 22
2 8 10 17 33 44
输出：
1 2 3 7 8 9 10 17 22 33 44
 */

//#include <stdio.h>
//
//int main() {
//    int num1 = 0, num2 = 0;
//    int j = 0, i = 0;
//    int arr[2000];
//    int tmp;
//    scanf("%d %d", &num1, &num2);
//    for (i = 0; i < num1; i++) {
//        scanf("%d", &arr[i]);
//    }
//    for (i = num1; i < num1 + num2; i++) {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < num1 + num2; i++) {
//        for (j = 0; j < num1 + num2 - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < num1 + num2; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}





/*
 作业标题(680)
函数判新素数
四作业内容
实现一个函数is_prime,判断一个数是不是素数。
利用上面实现的is primel函数，打印100到200之间的素数。
 */

//#include "stdio.h"
//
//int is_prime(int num) {
//    for (int i = 2; i < num; i++) {
//        if (num % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    for (int i = 100; i <= 200; i++) {
//        int flag = is_prime(i);
//        if (flag) {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}




/*
 * 作业标题(679)
函数判断闰年
作业内容
实现函数判新year是不是润年。
 */


#include "stdio.h"

int is_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int year;
    printf("请输入年份\n");
    scanf("%d", &year);
    int flag = is_year(year);
    if (flag) {
        printf("%d是闰年", year);
    }
    else {
        printf("%d不是闰年", year);
    }
    return 0;
}