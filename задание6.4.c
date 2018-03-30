#include <stdio.h>

int main()
{
	float result = .0, sz;
	char operation;

	printf("Type your expression\n");
	while (oper != 'E') {
		scanf("%f %c", &sz, &operation);
		switch (operation) {
		case 'S':
			result = sz;
			break;
		case '+':
			result += sz;
			break;
		case '-':
			result -= sz;
			break;
		case '*':
			result *= sz;
			break;
		case '/':
			if (sz == 0)
				printf("Division by zero\n");
			else
				result /= sz;
			break;
		default:
			printf("Unknown operation\n");
		}
		printf("= %f\n", result);
	}
	return 0;
}