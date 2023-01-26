#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main(void)
{
	int number, j = 0;

	printf("Enter a number: ");
	scanf("%d", &number);
	
	for (int i = 0; i <= number; i++)
	{
		if (i != number)
		{
			printf("%d + ", i);
		}
		else if (i == number)
		{
			printf("%d = ", i);
		}
		j = j + i;
	}

	printf("%d\n", j);

	return 0;
}
