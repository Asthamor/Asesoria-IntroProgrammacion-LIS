
#include <stdio.h>
#include <stdlib.h> //Para usar random
#include <math.h>
#include <process.h>

int main() {
    srand(getpid());
    //Las instrucciones IF nos sirven para elegir entre distintos caminos de ejecución
    // Su forma más simple es el if
    const int mayor = 100;
    const int menor = 1;
    int valorAlAzar = (rand() % (mayor - menor + 1)) + menor;
    int valorAdivinanza = 0;
    int vidas = 5;
    do {
        printf("Adivina el numero entre %i y %i:", menor, mayor);
        scanf("%d", &valorAdivinanza);
        if (valorAdivinanza == valorAlAzar) {
            for( int i = 0; i < 10; i++){
                printf("Adivinaste el numero!\n");
            }
        } else {
            vidas--;
            printf("Te quedan %i vidas D:\n", vidas);
            if (valorAdivinanza > valorAlAzar){
                printf("Estas arriba del numero\n");
            } else {
                printf("Estas abajo del numero\n");
            }
        }
    } while ((valorAlAzar != valorAdivinanza) && (vidas > 0) );
    printf("GAME OVER");
    return 0;
}