/* Viene inserta una frase e il programma trova la parole più lunga */

#include <stdio.h>
#include <string.h>

void strlong(char * frase_souce, char * space, char * max, int dim) {

    char operation_array[dim];
    int j = 0;

    for (int i = 0; i < dim; i++)
    {
        while ((frase_souce[i]) != (space[0]))
        {
            operation_array[j] = frase_souce[i];
            i++;
            j++;
        }

        operation_array[i] = '\0';

        if (strlen(operation_array) > strlen(max))
        {
            strcpy(max, operation_array);
        }
        j = 0;
    }
}

int main(void) {
    char frase[80];
    char refer[1] = {" "};

    printf("digita una frase qui sotto\n");

    gets(frase);

    int arr_len = strlen(frase);

    int var_parole = 0;
    int spazio = 0;

    char max_frase[arr_len];

    strlong(frase, refer, max_frase, arr_len);

    for (int i = 0; i < arr_len; i++)
    {
        if ((frase[i]) != (refer[0]))
        {
            var_parole++;
        } else spazio++;

        if ((i > 1) && (frase[i] == refer[0]) && (frase[i] == frase[i - 1]))
        {
            spazio--;
        }

        if ((i + 1) == (arr_len) && (frase[i] != refer[0]))
        {
            spazio++;
        }
    }

    if ((frase[0]) == (refer[0]))
    {
        printf("le parole inserite sono %d\n", (spazio - 1));
    } else printf("le parole inserite sono %d\n", spazio);

    printf("la massima parola inserita è: ");
    puts(max_frase);

    return 0;
}