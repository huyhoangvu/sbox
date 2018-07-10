#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
	char namechar[50];

	printf("Vui long nhap chuoi ky tu : ");
	gets(namechar);


	int hoa = 0;
	int thuong = 0;
	int i;
	for (i = 0; i <= strlen(namechar); i++)
	{
		if (isupper(namechar[i]))
			hoa++;
	}
	printf("So ki tu hoa: %d", hoa);

	for (i = 0; i <= strlen(namechar); i++)
	{
		if (islower(namechar[i]))
			thuong++;
	}
	printf("\nSo ki tu thuong : %d", thuong);

	_getch();
	return 0;
}