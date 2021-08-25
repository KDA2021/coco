#include<stdio.h>
int main()
{
	int a, b, t;
	scanf_s("%d,%d", &a, &b);
	t = a;/*先把a的值赋给t*/
	a = b;/*再把b的值赋给a*/
	b = t;/*最后再把b的值赋给b*/
	printf("%d,%d",a, b);
	return 0;
}