#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d%d%d", n % 10, n / 10 % 10, n / 100);/*（n%10的意思是n除以10取出的余数），逻辑自己算算就知道了*/
	return 0;
}