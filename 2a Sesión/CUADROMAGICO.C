#include <stdio.h>

//CUADRO MAGICO


void crearCuadro( int size, int mat[size][size]){
    for(int i = 0; i < size; i++){
        for (int j = 0; j < size; j++) {
            mat[i][j] = 0;
        }
    }
}

void imprimirMatriz(int n, int mat[n][n]){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            printf("|%i|", mat[i][j]);
        }
        printf("\n---------------------------------------------------\n");
    }
}


// Driver program to test above 
int main(){
    int size = 0;
    printf("Tamano del cuadro?:");
    scanf("%d", &size);
    if (size % 2 != 1){
        printf("El cuadro magico debe ser de tamano impar");
    } else {
        int mat[size][size];
        crearCuadro(size, mat);
        int numMaximo = size * size;
        int mitad = (size / 2);
        int fila = 0;
        int columna = mitad;
        for(int num = 1; num <= numMaximo; num++){
            if ((fila < 0) && (columna > size - 1)){
                columna = size -1;
                fila = 1;
            } else {
                if(fila < 0){
                    fila = size - 1;
                }
                if(columna > size - 1){
                    columna = 0;
                }
            }

            if( mat[fila][columna] != 0){
                fila = fila + 2;
                columna--;
            }
            mat[fila][columna] = num;
            fila--;
            columna++;

        }
        imprimirMatriz(size, mat);

    }


    return 0;
} 