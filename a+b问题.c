#include<stdio.h>
int main() 
{
	int a, b;
	scanf_s("%d,%d", &a, &b);/*scanf_s�ĸ�ʽ�ַ������治Ҫ��\n�����%d��%d�ö��Ÿ�����ô�����ʱ��ҲҪ�ö��Ÿ���������ÿո��������ҲҪ�ÿո����*/
	printf("%d", a + b);
	return 0;
}