#include <stdio.h>
int main(void)
{
	int factorial, n;
	factorial = 1;

	for (n = 1; n <= 10; n++) {
		factorial = factorial * n;

		printf("%2i      %-2i\n", n, factorial); \
	}
	return 0;
}