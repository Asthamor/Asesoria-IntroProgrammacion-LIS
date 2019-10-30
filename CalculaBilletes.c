//Introducir una cantidad y decir el numero de billetes en denominaciones de 500 a 1
#include <stdio.h>

int main(){
    int cantidad = 0;
    scanf("%i", &cantidad);
    while (cantidad != 0){
        if( cantidad > 500){
            printf("%i Billetes de 500\n", cantidad/500);
            cantidad = cantidad % 500;
        } else if (cantidad > 200){
            printf("%i Billetes de 200\n", cantidad/200);
            cantidad = cantidad % 200;
        } else if (cantidad > 100){
            printf("%i Billetes de 100\n", cantidad/100);
            cantidad = cantidad % 100;
        } else if (cantidad > 50){
            printf("%i Billetes de 50\n", cantidad/50);
            cantidad = cantidad % 50;
        } else if (cantidad > 20){
            printf("%i Billetes de 20\n", cantidad/20);
            cantidad = cantidad % 20;
        } else if (cantidad > 10){
            printf("%i Monedas de 10\n", cantidad/10);
            cantidad = cantidad % 10;
        } else if (cantidad > 5){
            printf("%i Monedas de 5\n", cantidad/5);
            cantidad = cantidad % 5;
        } else if (cantidad > 2){
            printf("%i Monedas de 2\n", cantidad/2);
            cantidad = cantidad % 2;
        } else {
            printf("%i Monedas de 1", cantidad);
            cantidad = 0;
        }

    }

    return 0;
}