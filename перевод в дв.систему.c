#include<stdio.h>

int main(void)
{
	int  n, c, b = 1;
	scanf("%d", &n);
	while (n != 0) {
		c = n % 2;
		n = n / 2;
		if (c == 0) {
			printf("0");
		}
		else {
			printf("1");
		}
	}
}

