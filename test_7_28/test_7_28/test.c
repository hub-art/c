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
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵġ����ġ�������ͼ����
����������
�������룬һ��������3~20������ʾ�����������Ҳ��ʾ��������αߵġ�*����������
���������
���ÿ�����룬����á�*����ɵġ����ġ������Σ�ÿ����*��������һ���ո�
ʾ��1
���룺
4
�����
* * * *
*     *
*     *
* * * *

ʾ��2
���룺
5�����
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
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�X��ͼ����
����������
�������룬һ��������2~20������ʾ�����������Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ��ȡ�
���������
���ÿ�����룬����á�*����ɵ�X��ͼ����

ʾ��1
���룺
5�����
*   *
 * *
  *
 * *
*   *
ʾ��2
���룺
6�����
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
����
����10��������Ҫ������ʱ���������10������ӡ������������������ǰ��������෴��˳���ӡ��10������
����������
һ�У�����10����������Χ-231~231-1�����ÿո�ָ���
���������
һ�У�������������10���������ÿո�ָ���
ʾ��1
���룺
1 2 3 4 5 6 7 8 9 10
����
�����
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
����
���������������е����У����������кϲ�Ϊһ���������в������
���ݷ�Χ�� 1 \le n, m \le 1000 \1��n,m��1000  �� �����е�ֵ���� 0 \le val \le 30000 \0��val��30000
����������
����������У�
��һ�а�������������n, m���ÿո�ָ���n��ʾ�ڶ��е�һ���������������ֵĸ�����m��ʾ�����еڶ����������������ֵĸ�����
�ڶ��а���n���������ÿո�ָ���
�����а���m���������ÿո�ָ���
���������
���Ϊһ�У��������Ϊn+m���������У�������Ϊn���������кͳ���Ϊm�����������е�Ԫ�����½��������������кϲ���
ʾ��1
���룺
5 6
1 3 7 9 22
2 8 10 17 33 44
�����
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
 ��ҵ����(680)
������������
����ҵ����
ʵ��һ������is_prime,�ж�һ�����ǲ���������
��������ʵ�ֵ�is primel��������ӡ100��200֮���������
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
 * ��ҵ����(679)
�����ж�����
��ҵ����
ʵ�ֺ�������year�ǲ������ꡣ
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
    printf("���������\n");
    scanf("%d", &year);
    int flag = is_year(year);
    if (flag) {
        printf("%d������", year);
    }
    else {
        printf("%d��������", year);
    }
    return 0;
}