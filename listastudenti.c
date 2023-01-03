#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct studente
{
char nome [30];
char cognome [30];
int matricola;
struct studente *next;
};
typedef struct studente studente;

studente* inserisci(studente *head, studente *p)
{
studente *r=head;/* predecessore del nuovo elemento*/
studente *q=head;/* successore del nuovo elemento*/
while((q!=NULL) && (q->matricola < p->matricola))
{
r=q;
q=q->next;
}
if (r==q)/*l'elemento si deve inserire in testa alla lista*/
{
p->next=head;
head=p;
}
else
{
p->next=q;
r->next=p;
}
return head;
}

int main(void) {
studente *head=NULL;
studente *p;
for (int i = 0; i < 5; i++)
{
p=(studente*)malloc(sizeof(studente));
printf("nome\t");
char* nome = "ciao";
strcpy(p->nome,nome);
printf("cognome\t");
char* cognome = "belli";
strcpy(p->cognome,cognome);
printf("matricola\t");
p->matricola = 12345 - i;
head=inserisci(head, p);/* inseriamo l’elemento nella lista*/
}
return 0;
}
