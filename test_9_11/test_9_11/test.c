#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age >= 18) //if ��ʹ?{} ���ƶ������-�����Ҳ�У�����飬���߸������
	{
		printf("������\n");
		printf("���Խ�?������\n");
	}
	return 0;
}
#include <stdio.h>
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age >= 18) //if ��ʹ?{} ���ƶ������-�����Ҳ�У�����飬���߸������
	{
		printf("������\n");
		printf("���Խ�?������\n");
	}
	else //else ��ʹ?{}���ƶ������-�����Ҳ�У�����飬���߸������
	{
		printf("δ����\n");
		printf("����������Ŷ\n");
	}
	return 0;
