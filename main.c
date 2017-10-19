#include <stdio.h>
#include <stdlib.h>

char nome[10];
int eta[10];

typedef struct
{
    char nome[11];
    int eta[11];
}struttura;

void Maggiore (struct struttura);
void Minore (struct struttura);
void Media (struct struttura);

int main()
{
int i,scelta,;
for(i=0;i<10;i++)
{
 printf("inserisci il %d nome \n",i+1);
 scanf("%s",& nome[i]);
 printf("inserisci la %d eta'\n",i+1);
 scanf("%d",& eta[i]);
}
 printf("inserisci 1 per la media \n 2 per il piu' giovane \n 3 per il piu' vecchio");
 scanf("&d",& scelta);
 switch(scelta)
 {
   case 1:
   {
       Media(struct struttura);
   }
   case 2:
   {
       Minore(struct struttura);
   }
   case 3:
   {
       Maggiore(struct struttura);
   }
    default : printf("scelta errata");
             scanf("%d",& scelta);
    }
return 0;
}

void Maggiore(struct struttura)
{
    int maggiore;
    char name;
    maggiore=struttura.eta[0];
    name=struttura.nome[0];
    for(i=1;i<10;i++)
    {
        if(maggiore<struttura.eta[i]);
        {
            maggiore=eta[i];
            name=struttura.nome;
        }
        printf("la persona più vecchia e' %s",& name);
        printf("ed ha %d anni",& maggiore);
    }
    return 0;
}
void Minore(struct struttura)
{
    int minore;
    char name;
    minore=struttura.eta[0];
    name=struttura.nome[0];
    for(i=1;i<10;i++)
    {
        if(minore>struttura.eta[i]);
        {
            minore=eta[i];
            name=struttura.nome;
        }
        printf("la persona piu' giovane e' %s",& name);
        printf("ed ha %d anni",& minore);
    }
    return 0;
}
void Media(struct struttura)
{
    int somma,i;
    float media;
    for(i=0;i<10;i++)
    {
        somma+=struttura.eta[i];
    }
    media=somma/10;
    printf("la media e' %d",& media);
}

