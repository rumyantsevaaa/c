#include <stdio.h> 
#include <string.h>
void main(void)
{
	char app[200] = "Душа без воображения все равно, ";
	char *s = app;
	char ppa[200] = "что обсерватория без телескопа.\0";
	char *c = ppa;
	strcat(s, c);
	puts(s);
}

