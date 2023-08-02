#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}



/*
编写一个函数void StatCharCount(char str[])，该函数接收一个字符串作为参数，
请统计该字符串中字母、数字、空格和其他字符的个数，在main函数调用该函数，分别打印字母、数字、空格 和 其他字符的出现次数。
返回提示：一个函数只能返回一个值，此处的统计结果有4个，因此返回结果可以使用全局变量带出来。
 */

//#include "stdio.h"
//#include "string.h"
//
//void StatCharCount(char str[]) {
//    int count1 = 0;
//    int count2 = 0;
//    int count3 = 0;
//    int count4 = 0;
//    for (int i = 0; i < strlen(str); i++) {
//        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
//            count1++;
//        }
//        else if (str[i] >= '0' && str[i] <= '9') {
//            count2++;
//        }
//        else if (str[i] == ' ') {
//            count3++;
//        }
//        else {
//            count4++;
//        }
//    }
//    printf("字母有%d个\n", count1);
//    printf("数字有%d个\n", count2);
//    printf("空格有%d个\n", count3);
//    printf("其他字符有%d个\n", count4);
//}
//
//int main() {
//    char str[] = { "[Hello world123]" };
//    for (int i = 0; i < strlen(str); ++i) {
//        printf("%c", str[i]);
//    }
//    printf("\n");
//    StatCharCount(str);
//    return 0;
//}



/*
 * 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）
 */


#include "stdio.h"

int main() {
    int money = 20;
    int count = 20;
    while (money) {
        money /= 2;
        count += money;
    }
    printf("可以得到%d瓶汽水", count);
    return 0;
}  