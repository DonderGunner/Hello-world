#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct str
{
    char nome[11];
    int eta[11];
}struttura;

struttura persona[10];
void Maggiore(struttura persona);
void Minore(struttura persona);
void Media(struttura persona);

int main()
{
int i,scelta;
for(i=0;i<10;i++)
{
 printf("inserisci il %d nome \n",i+1);
 scanf("%s",&persona[i].nome);
 printf("inserisci la %d eta'\n",i+1);
 scanf("%d",&persona[i].eta);
}
 printf("inserisci 1 per la media \n 2 per il piu' giovane \n 3 per il piu' vecchio");
 scanf("&d",& scelta);
 switch(scelta)
 {
   case 1:
   {
       Media(persona);
       break;
   }

   case 2:
   {
       Minore(persona);
       break;
   }

   case 3:
   {
       Maggiore(persona);
   }
    default : printf("scelta errata");
    break;
   }
return 0;
}

void Maggiore(persona)
{
    int maggiore,i;
    char name;
    maggiore=persona[0].eta;
    name=persona[0].nome;
    for(i=1;i<10;i++)
    {
        if(maggiore<persona[i].eta);
        {
            maggiore=persona[i].eta;
            name=persona[i].nome;
        }
        printf("la persona più vecchia e' %s",name);
        printf("ed ha %d anni",maggiore);
    }
    return 0;
}
void Minore(persona)
{
    int minore,i;
    char name;
    minore=persona[0].eta;
    name=persona[0].nome;
    for(i=1;i<10;i++)
    {
        if(minore>persona[i].eta);
        {
            minore=persona[i].eta;
            name=persona[i].nome;
        }
        printf("la persona piu' giovane e' %s",name);
        printf("ed ha %d anni",minore);
    }
    return 0;
}
void Media(persona)
{
    int somma,i;
    float media;
    for(i=0;i<10;i++)
    {
        somma+=persona[i].eta;
    }
    media=somma/10;
    printf("la media e' %f",media);
}

