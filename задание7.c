#include <stdio.h>
int main(void)	
{
double x = 3.31e-8;
double y = 2.01e-7;
double z = 7.16e-6;
double f = 2.01e-8;
double r;
r = (x*y) / (z*f);
printf("result  %e\n", r);
return 0;
}