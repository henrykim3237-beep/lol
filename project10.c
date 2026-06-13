#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int start;
	int end;
	int total = 1;
	scanf("%d", &end);
	for (start=1;start<=end;start++)
	{
		total *= start;
	}
	printf("%d \n", total);
	return 0;
}