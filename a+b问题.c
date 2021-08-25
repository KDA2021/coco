#include<stdio.h>
int main() 
{
	int a, b;
	scanf_s("%d,%d", &a, &b);/*scanf_s的格式字符串后面不要加\n，如果%d，%d用逗号隔开那么输入的时候也要用逗号隔开，如果用空格隔开输入也要用空格隔开*/
	printf("%d", a + b);
	return 0;
}