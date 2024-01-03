#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 6

int main(void) {

	// RICHIESTA ORARI + CONTROLLO FORMATI 

	char str1[N], str2[N];
	int h1, m1, h2, m2, time_frame = 0;
	printf("Inserire il primo orario (formato hh:mm):\n");
	gets_s(str1, N);
	if (sscanf(str1, "%d:%d", &h1, &m1) != 2 || h1 < 0 || h1 > 23 || m1 < 0 || m1 > 59) {
		printf("\nFORMATO NON RISPETTATO.\n");
		exit(EXIT_FAILURE);
	}
	
	printf("\nInserire il secondo orario (formato hh:mm):\n");
	gets_s(str2, N);
	if (sscanf(str2, "%d:%d", &h2, &m2) != 2 || h2 < 0 || h2 > 23 || m2 < 0 || m2 > 59) {
		printf("\nFORMATO NON RISPETTATO.\n");
		exit(EXIT_FAILURE);
	}
	

	// CONTROLLO QUALE ORARIO VIENE PRIMA
	if (strcmp(str1, str2) < 0) {
		time_frame = (h2 * 60 + m2) - (h1 * 60 + m1);
		printf("\nIl primo orario e' precedente al secondo.\nLa differenza tra i due orari e' di %d minuti.\n", time_frame);
		
	}
	else if (strcmp(str1, str2) > 0) {
		time_frame = (h1 * 60 + m1) - (h2 * 60 + m2);
		printf("\nIl secondo orario e' precedente al primo.\nLa differenza tra i due orari e' di %d minuti.\n", time_frame);
	}
	else printf("\nGli orari inseriti sono uguali.\n");

	return 0;
}