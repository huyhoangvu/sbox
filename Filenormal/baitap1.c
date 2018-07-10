#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {

	int n, a, b, c, temp;

	printf("Vui long nhap: ");
	scanf("%d", &n);





	a = n / 100;

	b = ((n % 100) / 10);

	c = n % 10;

	if (a<b)

	{

		temp = a;

		a = b;

		b = temp;

	}

	if (a<c)

	{

		temp = a;

		a = c;

		c = temp;

	}

	if (b<c)

	{

		temp = b;

		b = c;

		c = temp;

	}

	printf("%d%d%d", a, b, c);
	_getch();

}