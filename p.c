#include<stdio.h>/*对fahr=0，20...300打印华氏温度和摄氏温度对照表*/
int main()
{
	int fahr, celsius;
	int lower, upper, step;
	lower = 0;/*温度表下限*/
	upper = 300;/*温度表上限*/
	step = 20;/*步数长度*/

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);/*\t的意思是空出四个字符，%d指的是指定一个整数变元*/
		fahr = fahr + step;
	}
}