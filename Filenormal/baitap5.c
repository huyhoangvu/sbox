#include <stdio.h>

int main() {

	int ngay, thang, nam;

	printf("Ngay : ");
	scanf("%d", &ngay);
	printf("Thang : ");
	scanf("%d", &thang);
	printf("Nam : ");
	scanf("%d", &nam);

	switch (thang) {

	case 1: case 3: case 5: case 7: case 8: case 10:  case 12:

		if (ngay>0 && ngay <= 31) {

			printf("Ngay %d thang %d nam %d \n", ngay, thang, nam);   break;

		}

		else

		{
			printf("Error");   break;

		}

	case 4: case 6: case 9: case 11:

		if (ngay <= 30 && ngay>0) {

			printf("Ngay %d thang %d nam %d \n", ngay, thang, nam);           break;

		}

		else {
			printf("Error");   break;

		}

	case 2:

		if (ngay <= 28 && ngay > 0) {

			printf("Ngay %d thang %d nam %d \n", ngay, thang, nam);   break;

		}

		else

		{
			printf("Error");   break;

		}

	default: printf("Error"); break;

	}

	if (nam % 400 == 0)  printf(" \n Nam %d la nam nhuan", nam);

	else

	{

		if (nam % 4 == 0 && nam % 100 != 0) printf("Nam %d la nam nhuan", nam);

		else  printf("Nam %d khong phai la nam nhuan", nam);

	}

	_getch();
}