/*programma che permetta di creare un nuovo studente in maniera dinamica */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Studente
  {
    char nome[30];
    char cognome[30];
    int matricola;
    struct Studente* puntatore_al_prossimo;
  };
  
struct Studente * inizializza(char * nome, char * cognome, int matricola){
  struct Studente * alloca_studente = (struct Studente*)malloc(sizeof(struct Studente));
  strcpy(alloca_studente->nome, nome);
  strcpy(alloca_studente->cognome, nome);
  alloca_studente->matricola = matricola;
  return alloca_studente;
}

void main(void) {
  puts("vuoi inserire uno studente?");
  struct Studente* studente = inizializza("roberto", "cavalli", 12345);
}
  
