#include<stdio.h>
int main()
{
	int a, b, t;
	scanf_s("%d,%d", &a, &b);
	t = a;/*�Ȱ�a��ֵ����t*/
	a = b;/*�ٰ�b��ֵ����a*/
	b = t;/*����ٰ�b��ֵ����b*/
	printf("%d,%d",a, b);
	return 0;
}