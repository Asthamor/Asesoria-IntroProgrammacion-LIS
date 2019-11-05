#include <stdio.h>

int main() {
    //una matriz puede crearse haciendo un vector de vectores
    /*
    M
    {           j
    1 { 10,11,12,13,14,15 }
    2 { 20,21,22,23,24,25 }
    3 { 30,31,32,33,34,35 }
  i 4 { 40,41,42,43,44,45 }
    5 { 50,51,52,53,54,55 }
    6 { 60,61,62,63,64,65 }
    7 { 70,71,72,73,74,75 }
    }
    Podemos navegar con un indice "externo" (en este caso i) y uno que recorra los arreglos internos
     (j en este caso)
    */

    //al declarar una matriz, la segunda dimensión siempre debe ir especificada
    int matriz[][6] = {
            {10, 11, 12, 13, 14, 15},
            {20, 21, 22, 23, 24, 25},
            {30, 31, 32, 33, 34, 35},
            {40, 41, 42, 43, 44, 45},
            {50, 51, 52, 53, 54, 55},
            {60, 61, 62, 63, 64, 65},
            {70, 71, 72, 73, 74, 75},
    };

    //Por ejemplo, si que queremos acceder a numero 42
    printf("%i", matriz[3][2]);

    //Para hacer un recorrido, también necesitamos dos ciclos

    //Con el ciclo de i, iteramos las filas
    printf("IMPRIMIENDO MATRIZ\n");
    for(int i = 0; i < 7; i++){
        printf("- FILA %i: |", i+1);
        //Con el ciclo de j, iteramos los arreglos internos, las columnas
        for(int j = 0; j < 6; j++){
            printf(" %i |", matriz[i][j]);
        }
        printf("\n");
    }

    //BUSQUEDA
    int elementoABuscar = 55;
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 6; j++){
            if(matriz[i][j] == elementoABuscar){
                printf("El elemento se encuentra en la celda %i,%i", i+1,j+1);
            }
        }
    }

    //MODIFICAR LA MATRIZ Y LA BUSQUEDA PARA QUE DIGA EL NUMERO DE VECES QUE SE 
    //ENCONTRÓ VALOR EN LA MATRIZ

}