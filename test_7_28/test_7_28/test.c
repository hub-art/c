#define _CRT_SECURE_NO_WARNINGS 1



/*
����
KiKi��һ����������֪��ת�ú�ľ��󣨽���������л����õ����¾����Ϊת�þ��󣩣����̰������

����������
��һ�а�����������n��m����ʾһ���������n��m�У��ÿո�ָ��� (1��n��10,1��m��10)

��2��n+1�У�ÿ������m����������Χ-231~231-1�����ÿո�ָ���������n*m��������ʾ��һ�������е�Ԫ�ء�

���������
���m��n�У�Ϊ����ת�ú�Ľ����ÿ����������һ���ո�
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
 ��ҵ����(696)
��һά���顿��������
ʷ
��ҵ����
������A�е����ݺ�����B�е����ݽ��н�����������һ����
 */


 //#include "stdio.h"
 //
 //int main(){
 //    int A[] = {0,1,2,3,4,5,6,7,8,9,10};
 //    int B[] = {00,11,22,33,44,55,66,77,88,99,110};
 //
 //    //�������鳤��
 //    int n = sizeof(A)/sizeof (A[0]);
 //    //����һ����ʱ���������м���
 //    int tmp[n];
 //    //�������飬������A������ʱ������
 //    for (int i = 0; i < sizeof(A) / sizeof(A[0]); ++i){
 //        tmp[i] = A[i];
 //    }
 //    //�������飬������B�����ݷŵ�A��
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
��������Ŀ����
��ʵ������������������ĺ�����
1.��ʵ��GetMaxValOfArrayi�������ú�������
һ���������飬��Ԫ�ظ�����������������Ԫ��
���ֵ������
2.��ʵ��GetMinValOfArray�������ú�������
һ���������飬��Ԫ�ظ�����������������Ԫ��
��Сֵ������
3.��ʵ�ֺ���PrintArray,��ӡ����������Ԫ��
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
//    printf("���ֵΪ��%d\n", max);
//
//    int min = GetMinValOfArray(arr1, num);
//    printf("��СֵΪ��%d\n", min);
//
//    PrintArray(arr1, num);
//    return 0;
//}






/*
��ҵ����(656)
���Լ��

��ҵ����
���������������������������Լ��

���磺
���룺20 40
�����20
 */


//#include "stdio.h"
//
//int main() {
//    int num1, num2;
//    int tmp = 0;
//    int gcd = 0;
//    printf("������������\n");
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
//    printf("%d��%d�����Լ����:%d", num1, num2, gcd);
//
//    return 0;
//}





/*
��ҵ����(655)
��ӡ����

��ҵ����
��ӡ1000�굽2000��֮�������
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