#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>a
#include <string.h>

int main(void) {

	char a, b;

	printf("Inserire un carattere: ");
	scanf("%c", &a);

	getchar();

	printf("Inserire un carattere: ");
	scanf("%c", &b);


	if (isalpha(a) && isalpha(b)) {
		if (b >= a) {
			printf("I caratteri in ordine alfabetico sono: %c, %c.\n", a, b);
		}
		else printf("I caratteri in ordine alfabetico sono: %c, %c.\n", b, a);
	}
	else if (isdigit(a)) {
		printf("Il carattere %c e' una cifra.\n", a);
	}
	else if (isdigit(b)) {
		printf("Il carattere %c e' una cifra.\n", b);
	}


	return 0;

}
