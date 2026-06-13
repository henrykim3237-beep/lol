#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;
	do
	{
		i++;
		sum += i;
		i++;

	} while (i < 100);
	printf("%d", sum);
	return 0;

}
