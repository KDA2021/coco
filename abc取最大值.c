#include <stdio.h>
main()
{
	int a, b, c ;
	scanf_s("%d,%d,%d", &a, &b, &c);
	printf("max=%d\n", a > b ? (a > c ? a : c) : (b > c ? b : c));
	return 0;
}