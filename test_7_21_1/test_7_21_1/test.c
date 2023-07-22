#include <stdio.h>
int main()
{
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(short int));
    printf("%d\n", sizeof(long int));
    printf("%d\n", sizeof(unsigned char));
    printf("%d\n", sizeof(unsigned short));
    printf("%d\n", sizeof(unsigned int));
    printf("%d\n", sizeof(unsigned long));
    printf("%d\n", sizeof(unsigned long long));
    return 0;
}

/*
char                -128~127
unsigned char       0~255
short               -32768~32767
unsigned short      0~65535
int                 -2147483648~2147483647
unsigned int        0~429496729
*/