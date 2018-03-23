#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
double f;
f = UINT_MAX;
printf("signed char: от %d до %d\n", SCHAR_MIN, SCHAR_MAX);
printf("unsigned char: от %d до %d\n", 0, UCHAR_MAX);
printf("signed int: от %d до %d\n", INT_MIN, INT_MAX);
printf("unsigned int: от %d до %.lf\n", 0, f);
printf("signed short: от %d до %d\n", SHRT_MIN, SHRT_MAX);
printf("unsigned short: от %d до %d\n", 0, USHRT_MAX);
printf("signed long: от %ld до %ld\n", LONG_MIN, LONG_MAX);
printf("unsigned long: от %d до %lu\n", 0, ULONG_MAX);
return 0;
}