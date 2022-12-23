#include <stdio.h>
#define DIMENSIONE_FISICA 10

struct Lista
{
  int array[DIMENSIONE_FISICA];
  int primo, lunghezza;
};

void main(void) {
  struct Lista lista;
  lista.primo = 2;  // posso decidere dove posizionare il primo elemento
  lista.lunghezza = 0;  // all'inizio la lunghezza dell'array è zero
  // perché non ha elementi
  
  int dimensione_logica = 10 - lista.primo; // la dimensione logica è
  // la dimensione fisica meno la posizione del primo elemento
  
  for(int i = 0; i < dimensione_logica; i++)
  {
    lista.array[lista.primo + lista.lunghezza] = i + 2;
    lista.lunghezza++;
  }
}
