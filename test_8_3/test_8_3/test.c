#define _CRT_SECURE_NO_WARNINGS 1
/*
��ҵ����(722)
��ӡˮ�ɻ���

��ҵ����
���0��100000֮������С�ˮ�ɻ������������

��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1^3��5^3��3^3����153��һ����ˮ�ɻ�������
 */

//#include "stdio.h"
//#include "math.h"
//
// //��������λ��
//int getDigits(int num) {
//    int digits = 0;
//    while (num != 0) {
//        num /= 10;
//        digits++;
//    }
//    return digits;
//}
//
////�ж��Ƿ�Ϊˮ�ɻ���
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
��ҵ����(723)
�������
��ҵ����
��Sn=a+aa+aaa+aaaa+aaaaal��ǰ5��֮�ͣ�����a��һ�����֣�
���磺2+22+222+2222+22222
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
//    printf("������һ��һλ����\n");
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