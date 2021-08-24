#include<stdio.h>
#include<math.h>/*只要用到数学函数，就需要在程序开始处包含头文件math.h*/
int main()
{
	printf("%.8f\n", 1 + 2 * sqrt(3) / (5 - 0.1));/*整数-浮点数=浮点数，sqrt（x）的作用是计算x的算术平方根*/
	return 0;
}