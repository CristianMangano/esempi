/* Quando si chiama la funzione main i caratteri inseriti vengono stampati */

#include <stdio.h>

int main(int argc, char*argv[]) {

    if (argc > 1)
    {
        printf("stampa dei caratteri inseriti: \n");
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j] != '\0'; j++)
            {
                char in = argv[i][j];
                printf("%c", in);
            }
            if ((i + 1) < argc)
            {
                printf(" ");
            }
        }
    } else printf("il programma e' stato chiamato senza parametri");

    return 0;
}