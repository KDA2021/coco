#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d%d%d", n % 10, n / 10 % 10, n / 100);/*��n%10����˼��n����10ȡ�������������߼��Լ������֪����*/
	return 0;
}