
#include <stdio.h>
#include <stdlib.h> //Para usar random
#include <math.h>
#include <process.h>


int main() {
    srand (getpid());
    const int mayor = 100;
    const int menor = 1;
    int valorAlAzar = (rand() % (100 - 1 + 1)) + 1;
    switch (valorAlAzar){
        case 1 ... 10:
            printf("HOY NO SALGAS DE CASA\n");
            break;
        case 11 ... 30:
            printf("MUCHO CUIDADO\n");
            break;
        case 31 ... 60:
            printf("DIA COMUN\n");
            break;
        case 61 ... 90:
            printf("UN BUEN DIA\n");
        case 91 ... 99:
            printf("HOY SERAS FELIZ :D\n");
            break;
        default:
            printf("VE A COMPRAR UN BOLETO DE LOTERIA\n");
            break;
    }

    return 0;
}