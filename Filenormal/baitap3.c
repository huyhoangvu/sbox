#include <stdio.h>
#include <conio.h>

int main() {
	float a;
	printf("Vui long nhap vao so M da di: ");
abc:
	scanf_s("%f", &a);

	if (a < 0) {
		printf(" Vui long nhap lai");

	}
	if (a>0 && a <= 1000) {
		printf("10000 VND");
	}

	if (a>1000 && a <= 30000) {
		float b = ((a - 1000) / 200) * 1500 + 10000;
		printf("%0.0f VND", b);
	}
	if (a > 30000) {
		float c = ((a - 30000) / 1000) * 8000 + (29000 / 200) * 1500 + 10000;
		printf("%0.0f VND", c);
	}
	_getch();

}