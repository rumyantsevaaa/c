#include <stdio.h> 
#include <string.h>
void main(void)
{
	char app[200] = "���� ��� ����������� ��� �����, ";
	char *s = app;
	char ppa[200] = "��� ������������ ��� ���������.\0";
	char *c = ppa;
	strcat(s, c);
	puts(s);
}

