/* copia di una stringa da un array ad uno di altro */

#include <stdio.h>

void strcopy(const char * out, char * in, int dim) {

    for (int j = 0; j < dim; j++)
    {
        if (*out != '\0')
        {
            *(in + j) = *(out + j);
        }
        if ((j + 1) == dim)
        {
            *(in + j) = '\0';
        }
        
    }

}

int main (void) {

    char * parola[] = {"hello", "ciao"};
    printf("%c\n", parola[1][2]);   // versione semplice
    printf("%c", *(*(parola+1)+2)); // versione 'complicata'
    /*
    int indice = sizeof(parola)/sizeof(char);

    char output[indice];

    strcopy(parola, output, indice);

    printf("stampa della stringa originale\n");

    for (int i = 0; parola[i] != '\0'; i++)
    {
        printf("%c", *(parola + i));
    }

    printf("\nstampa della stringa copiata\n");

    for (int ind = 0; ind < indice; ind++)
    {
        printf("%c", *(output + ind));
    }
    */

    return 0;
}