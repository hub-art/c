#define _CRT_SECURE_NO_WARNINGS 1
/*
 * ��ҵ����(697)
ʹ�ú���ʵ���������
ʷ
��ҵ����
����һ���������飬��ɶ�����Ĳ���
1.ʵ�ֺ���init0��ʼ������Ϊȫ0
2.ʵ��orint(0��ӡ�����ÿ��Ԫ��
3.ʵ��reverse()�����������Ԫ�ص����á�
Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
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
 ��ҵ����(677)
 �˷��ھ���
 ��ҵ����
 ʵ��һ����������ӡ���ھ����ھ���������������Լ�ָ��
 �磺����9�����9*9�ھ������12�����12*12�ĹԷ��ھ���
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