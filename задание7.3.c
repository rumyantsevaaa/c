#include <stdio.h>

int main(void)
{
	float n1, n2, sum1, sum2;
	int even, odd, p = 1;
	printf("���� �����:\n");

	while (p != 0) {
		scanf("%i", &p);
		if (p == 0) {
			printf("�� ��� ������: %i\n", even);
			printf("������� �������� ������: %f\n", sum1 / n1);
			printf("�� ��� ��������: %i\n", odd);
			printf("������� �������� ��������: %f\n", sum2 / n2);
			break;
		}
		if (p % 2 == 0) {
			even++;
			sum1 += p;
			n1 = even;
		}
		else {
			odd++;
			sum2 += p;
			n2 = odd;
		}
	}
	return 0;
}
