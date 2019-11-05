
#include <stdio.h>
#include <stdlib.h> //Para usar random
#include <math.h>

int main() {
    //Las instrucciones IF nos sirven para elegir entre distintos caminos de ejecución
    // Su forma más simple es el if
    const int mayor = 10;
    const int menor = 1;
    int valorAlAzar = (rand() % (mayor - menor + 1)) + menor;
    int valorAdivinanza = 0;
    printf("Adivina el numero entre %i y %i:", menor, mayor);
    scanf("%d", &valorAdivinanza);
    if (valorAdivinanza == valorAlAzar) {
        printf("Adivinaste el numero!");
        printf("Adivinaste el numero!");
        printf("Adivinaste el numero!");
        printf("Adivinaste el numero!");
        printf("Adivinaste el numero!");
    } else {
        int diferencia = abs(valorAdivinanza - valorAlAzar);
        if (valorAdivinanza > valorAlAzar){
            printf("Estas arriba del numero por %i\n", diferencia);
        } else {
            printf("Estas abajo del numero por %i\n", diferencia);
        }
        printf("GRACIAS POR PARTICIPAR >:");
    }
    
    return 0;
}