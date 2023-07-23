//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int score = 0;
//	printf("请输入学生成绩");
//	scanf("%d", &score);
//	if (score >= 90 && score <= 100) {
//		printf("A");
//	}
//	else if (score >= 80 && score < 90) {
//		printf("B");
//	}
//	else if (score >= 70 && score < 80) {
//		printf("C");
//	}
//	else if (score >= 60 && score < 70) {
//		printf("D");
//	}
//	else if (score >= 0 && score < 60) {
//		printf("E");
//	}
//	else {
//		printf("非法成绩");
//	}
//
//	return 0;
//}






//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	for (int num = 1; num <= 100; num++)
//	{
//		if (num % 3 == 0) {
//			printf("%d\t", num);
//		}
//	}
//	return 0;
//}





#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int a, b, c;
    int tem = 0;
    printf("请输入三个整数\n");
    scanf("%d %d %d", &a, &b, &c);
    if (b > a) {
        tem = a, a = b, b = tem; //2 1 3
        if (c > b) {
            tem = b, b = c, c = tem; //2 3 1
            if (b > a) {
                tem = a, a = b, b = tem;
            }
        }
    }
    else {
        if (c > b) {
            tem = b, b = c, c = tem; //2 3 1
            if (b > a) {
                tem = a, a = b, b = tem;
            }
        }
    }
    printf("%d %d %d", a, b, c);
    return 0;
}