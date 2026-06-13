/*#include <stdio.h>
int main(void)
{
	int cur = 2;
	int is = 0;
	while (cur < 10)
	{
		is = 1;
		while (is < 10)
		{
			printf("%dx%d=%d\n", cur, is, cur * is);
			is++;
		}
	cur++;
	}
	return 0;
}
#include <stdio.h>
int main(void)
{
	int a = 0;
	int i = 1;
	int s = 1;
	while (i < 5)
	{
		a = 0;
		printf("*\n");
		while (a < s)
		{
			printf("o");
			a++;
		}
		i++;
		s++;
	}
	printf("*");
	return 0;
}
#include <stdio.h>
int main(void)
{
	int num = 0;
	do
	{
		printf("Hello world! \n");
		num++;
	} while (num < 3);
}*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int total = 0, num = 0;

	do
	{
		printf("정수입력(0 to quit):");
		scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("합계: % d \n", total);
	return 0;
}