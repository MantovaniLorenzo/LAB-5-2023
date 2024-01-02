#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define M 61

int main(void)
{
    char str[M], w1[M], w2[M], w3[M], w4[M], w5[M];
    int i, count, flag;
    float media = 0.0, sum =0;
    

    printf("Inserire una stringa di massimo 5 parole:\n");
    gets_s(str, M);

    count = sscanf(str, "%s%s%s%s%s", w1, w2, w3, w4, w5);
    printf("\nLa seguente stringa contiene %d parole.\n", count);

    int lenght[5] = { strlen(w1), strlen(w2), strlen(w3), strlen(w4), strlen(w5) };
    int v_flag[5] = { 0 };
    

    switch (count) {
    case 0:
        printf("NESSUNA PAROLA INSERITA.\n");
        exit(EXIT_FAILURE);
        break;
    case 1:
        printf("\nLa lunghezza media delle parole e' %d.\n", strlen(w1));
        printf("\nLa stringa contiene %d parole da %d caratteri.\n", count, strlen(w1));
        break;
    case 2:
        sum = strlen(w1) + strlen(w2);
        media = (float)sum / 2;
            printf("\nLa lunghezza media delle parole e' %.2f.\n", media);
            for (int i = 0; i < count; i++) {
                flag = 1;
                if (v_flag[i] != 1) {
                    for (int j = i + 1; j < count; j++) {
                        if (lenght[i] == lenght[j]) {
                            flag++;
                            v_flag[j] = 1;
                        }
                    }
                    printf("\n%d parole da %d caratteri.\n", flag, lenght[i]);
                }
            }
            
        break;
    case 3: 
        sum = strlen(w1) + strlen(w2) + strlen(w3);
        media = (float)sum / 3;
        printf("\nLa lunghezza media delle parole e' %.2f.\n", media);
        for (int i = 0; i < count; i++) {
            flag = 1;
            if (v_flag[i] != 1) {
                for (int j = i + 1; j < count; j++) {
                    if (lenght[i] == lenght[j]) {
                        flag++;
                        v_flag[j] = 1;
                    }
                }
                printf("\n%d parole da %d caratteri.\n", flag, lenght[i]);
            }
        }

        break;
    case 4:
        sum = strlen(w1) + strlen(w2)+ strlen(w3) + strlen(w4);
        media = (float)sum / 4;
        printf("\nLa lunghezza media delle parole e' %.2f.\n", media);
        for (int i = 0; i < count; i++) {
            flag = 1;
            if (v_flag[i] != 1) {
                for (int j = i + 1; j < count; j++) {
                    if (lenght[i] == lenght[j]) {
                        flag++;
                        v_flag[j] = 1;
                    }
                }
                printf("\n%d parole da %d caratteri.\n", flag, lenght[i]);
            }
        }

        break;
    case 5:
        sum = strlen(w1) + strlen(w2) + strlen(w3)+ strlen(w4)+ strlen(w5);
        media = (float)sum / 5;
        printf("\nLa lunghezza media delle parole e' %.2f.\n", media);
        for (int i = 0; i < count; i++) {
            flag = 1;
            if (v_flag[i] != 1) {
                for (int j = i + 1; j < count; j++) {
                    if (lenght[i] == lenght[j]) {
                        flag++;
                        v_flag[j] = 1;
                    }
                }
                printf("\n%d parole da %d caratteri.\n", flag, lenght[i]);
            }
        }

        break;

    }

    return 0;
}