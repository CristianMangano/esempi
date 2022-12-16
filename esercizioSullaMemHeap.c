/* Inserisci del testo da tastiera e la funzione restituisce un riferimento ad un array, dimensionato sui caratteri di input piu' il carattere terminatore '\0' */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * stringaEverInMem(char string[], int how) {
    int i = 0;
    char * p = (char*) malloc(how * sizeof(char));
    char * po = p;

    while (i < how)
    {
        *(po + i) = string[i];
        i++;
    }

    return p;
}

int main(void) {
    
    printf("inserisci del testo\n");

    char str_in[100];
    gets(str_in);

    int dimension = (strlen(str_in)) + 1;   // la funzione strlen() quando ritorna la lunghezza della stringa esclude il carattere terminatore '\0'

    char * stringInHeap = stringaEverInMem(str_in, dimension);

    printf("la stringa che hai inserito e'\n");
    puts(stringInHeap);

    return 0;
}
