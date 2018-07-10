#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h> 


int main() {

	char text[100];

	printf("Vui long nhap vao l:");
	fgets(text, 100, stdin);

	int i, j = 0;


	while (text[0] == ' ') {
		for (int i = 0; i < strlen(text); i++)
		{
			text[i] = text[i + 1];
		}
	}
	int q = 0, w;
	while (q < strlen(text)) {
		if (text[q] == ' '&& text[q + 1] == ' ')
			for (w = q; w < strlen(text); w++) {
				text[w] = text[w + 1];
			}
		q++;
	}

	for (i = 0; i < strlen(text); i++)
		if (text[i] == '.' && text[i + 1] == '.' || text[i] == ',' && text[i + 1] == ',')
		{
			text[i + 1] = ' ';
		}

	char a;
	for (i = 0; i < strlen(text); i++)
		if (text[i] == ' ' && text[i + 1] == '.' || text[i] == ' ' && text[i + 1] == ',')
		{
			a = text[i];
			text[i] = text[i + 1];
			text[i + 1] = a;
		}


	for (i = 0; i<strlen(text); i++)
		if ((j == 0 && text[i] != ' ') || (j&&text[i - 1] == ' '&&text[i] != ' '))
			text[j++] = text[i];
		else if ((j&&text[i] != ' ') || (j&&text[i - 1] != ' '&&text[i] == ' '))
			text[j++] = text[i];
	if (text[j - 1] == ' ') text[j - 1] = NULL;


	for (i = 0; i <strlen(text) - 1; i++)
	{
		putchar(text[i]);
	}


	_getch();
	return 0;
}