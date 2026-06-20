#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdio.h>

int main(void)
{
	int result;
	int result2;
	int num1, num2;
	
	scanf("%d %d", &num1, &num2);

	result = num1 - num2;
	result2 = num1 * num2;
	printf(" % d - % d = %d, %d * %d = %d", num1, num2, result, num1, num2, result2);
	return 0;
}