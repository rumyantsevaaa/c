#include <stdio.h>
int main(void)
{
	int n, number;
	number = 0;
	for (n = 5; n <= 50; n = n + 5)
	{
		number = n * (n + 1) / 2;
		printf("%4i         %4i\n", n, number);
	}
	return 0;
}