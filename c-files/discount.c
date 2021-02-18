#include <stdio.h>

int main()
{
    //variabili
    float a,b,scontoE,prezzoF,risparmio;

    //inserimento prezzo da scontare
    printf("inserisci il prezzo da scontare\n");
    scanf("%f",&a);

    //inserimento sconto
    printf("\ninserisci lo sconto\n");
    scanf("%f",&b);

    //calcolo sconto in euro
    scontoE = a * b / 100;

    //calcolo prezzo finale
    prezzoF = a - scontoE;

    //stampa a video lo sconto
    printf("\nlo sconto e' di ");
    printf("%f",scontoE);
    printf(" euro\n");

    //stampa a video il prezzo finale
    printf("il prezzo finale scontato e' di ");
    printf("%f",prezzoF);
    printf(" euro\n");

    //calcolo risparmio
    risparmio = a - prezzoF;

    //stampa a video il risparmio
    printf("stai risparmiando ");
    printf("%f",risparmio);
    printf(" euro\n");

    //check del risparmio se maggiore o minore di 50
    if (risparmio >= 50) {
        printf("complimenti, stai risparmiando piu' di 50 euro");
    }
    else {
        printf("che schifo, stai risparmiando meno di 50 euro");
    }

    return 0;
}
