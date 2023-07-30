#define _CRT_SECURE_NO_WARNINGS 1
/*
 * 作业标题(697)
使用函数实现数组操作
史
作业内容
创建一个整形数组，完成对数组的操作
1.实现函数init0初始化数组为全0
2.实现orint(0打印数组的每个元素
3.实现reverse()函数完成数组元素的逆置。
要求：自己设计以上函数的参数，返回值。
 */



 //#include "stdio.h"
 //
 //void init(int arr[], int num) {
 //    for (int i = 0; i < num; i++) {
 //        arr[i] = 0;
 //    }
 //}
 //
 //
 //void print(int arr[], int num) {
 //    for (int i = 0; i < num; ++i) {
 //        printf("%d ", arr[i]);
 //    }
 //    printf("\n");
 //}
 //
 //void reverse(int arr[], int num) {
 //    int tmp = 0;
 //    for (int i = 0; i < num; ++i) {
 //        tmp = arr[i];
 //        arr[i] = arr[num - 1];
 //        arr[num - 1] = tmp;
 //        num--;
 //    }
 //}
 //
 //int main() {
 //    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
 //    int num = sizeof(arr) / sizeof(arr[0]);
 //    print(arr, num);
 //    reverse(arr, num);
 //    print(arr, num);
 //    init(arr, num);
 //    print(arr, num);
 //    return 0;
 //}



 /*
  *
 作业标题(677)
 乘法口诀表
 作业内容
 实现一个函数，打印法口诀表，口决表的行数和列数自己指定
 如：输入9，输出9*9口诀表，输出12，输出12*12的乖法口诀表
  */


#include "stdio.h"


void print_table(int num) {
    for (int j = 1; j <= num; ++j) {
        for (int i = 1; i <= j; ++i) {
            printf("%d * %d = %d ", i, j, i * j);
        }
        printf("\n");
    }
}

int main() {
    int num = 0;
    scanf("%d", &num);
    print_table(num);
    return 0;
}