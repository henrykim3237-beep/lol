

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num = 0;
	int num2 = 3;
	scanf("%d", &num);
	while (num < 6)
	{
		num++;
		printf("%d \n", num * num2);

	}
	return 0;
}
