//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int num = 0;
//    for (int num = 1; num <= 100 ; num++) {
//        if (num % 2 != 0){
//            printf("%d ",num);
//        }
//    }
//}



//#include <stdio.h>
//int main()
//{
//    int a = 0, b = 0;
//    for (a = 1, b = 1; a <= 100; a++)
//    {
//        if (b >= 20) break;
//        if (b % 3 == 1)
//        {
//            b = b + 3;
//            continue;
//        }
//        b = b - 5;
//    }
//    printf("%d\n", a);
//    return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "stdio.h"
//
//int main() {
//    for (int a = 1; a <= 9; a++) {
//        for (int b = 1; b <= a; b++) {
//            printf("%d * %d = %d\t", b, a, a * b);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#define _crt_secure_no_warnings 1
//
//#include "stdio.h"
//
//int main() {
//    int arr[] = { 1,2,3,45,68,45,136,54,845,45 };
//    int num = arr[0];
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//        if (num < arr[i]) {
//            num = arr[i];
//        }
//    }
//    printf("最大数为 %d", num);
//}




//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "stdio.h"
//
//int main() {
//    double sum = 0.0;
//    for (int num = 1; num <= 100; num++) {
//        if (num % 2 != 0) {
//            sum += 1.0 / num;
//        }
//        else {
//            sum -= 1.0 / num;
//        }
//    }
//    printf("%f", sum);
//    return 0;
//}



#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"

int main() {
    int count = 0;
    for (int num = 1; num <= 100; num++) {
        int i = num;
        while (i > 0) {
            if (i % 10 == 9) {
                count++;
            }
            i /= 10;
        }
    }
    printf("%d", count);
    return 0;
}