#include <stdio.h>

int main(void){
    int zahl;
    int zaehler=0;
    int resultat=0;

    printf("\ngebe eine Zahl zwischen 0 und 20 ein\n");
    scanf("%d", &zahl);

    while (zaehler <= zahl) {
        printf("%d\n", zaehler);
        resultat=resultat+zaehler ;
        ++zaehler;
    }
    printf("\Das resultat der zahl ist: %d \n" ,resultat);

    return 0;
}
