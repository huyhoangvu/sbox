#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char* p;
	int i, n;

	p = (char*)malloc(128);
	printf("\n Nhap xau ki tu : ");
	gets(p);
	n = strlen(p);

	printf("\n Hien thi xau dao nguoc: \n");
	for (i = n - 1; i >= 0; i--)
		putchar(p[i]);
	printf("\n");

	_getch();
}