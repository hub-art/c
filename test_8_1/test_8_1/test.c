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
��дһ������void StatCharCount(char str[])���ú�������һ���ַ�����Ϊ������
��ͳ�Ƹ��ַ�������ĸ�����֡��ո�������ַ��ĸ�������main�������øú������ֱ��ӡ��ĸ�����֡��ո� �� �����ַ��ĳ��ִ�����
������ʾ��һ������ֻ�ܷ���һ��ֵ���˴���ͳ�ƽ����4������˷��ؽ������ʹ��ȫ�ֱ�����������
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
//    printf("��ĸ��%d��\n", count1);
//    printf("������%d��\n", count2);
//    printf("�ո���%d��\n", count3);
//    printf("�����ַ���%d��\n", count4);
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
 * ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�
 */


#include "stdio.h"

int main() {
    int money = 20;
    int count = 20;
    while (money) {
        money /= 2;
        count += money;
    }
    printf("���Եõ�%dƿ��ˮ", count);
    return 0;
}  