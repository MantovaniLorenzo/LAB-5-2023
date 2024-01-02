#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str[256];
	int count_alpha = 0;
	int count_digit = 0;

	gets_s(str, 256);

	printf("La stringa e' lunga %d\n", strlen(str));

	for (int i = 0; i < strlen(str); i++) {
		if (isdigit(str[i])) {
			count_digit++;
		}
		else if (isalpha(str[i]))
			count_alpha++;
	}

	printf("Il numero di caratteri alfabetici e' %d, mentre il numero di caratteri numeri e' %d\n", count_alpha, count_digit);


  return 0;
}