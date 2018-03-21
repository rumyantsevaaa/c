#include <stdio.h>
int main(void)
{
int next1;
int next2;
int i1 = 365, j1 = 7;
int i2 = 996, j2 = 4;
next1 = i1 + j1 - i1 % j1;
next2 = i2 + j2 - i2 % j2;
printf("next_multiple1 = %i\n", next1);
printf("next_multiple2 = %i\n", next2);
return 0;
}