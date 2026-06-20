#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4;
	int result = 0;
	scanf("%d %d", &num1, &num2);


	
	if (num1 > num2)
	{
		num3 = num1;
		num4 = num2;
	}
	else if (num2 > num1)
	{
		num3 = num2;
		num4 = num1;
	}

	else
	{
		num3 = num1;
		num4 = num2;
	}

	printf("%d - %d = %d",num3,num4,num3-num4);
	return 0;
}