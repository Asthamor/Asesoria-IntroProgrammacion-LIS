#include <stdio.h>

void transpose(int mat[][10], int n){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            int aux = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = aux;
        }
    }
}

void imprimirMatriz(int mat[][10], int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            printf("|%i|", mat[i][j]);
        }
        printf("\n___________\n");
    }
}
void sortVect(int arr[], int n){
    int desordenado = 1;
    while (desordenado){
        desordenado = 0;
        for (int i = 0; i < n ; ++i) {
            if (arr[i] > arr[i+1]){
                int aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                desordenado = 1;
            }
        }
    }
}
void ordenarFila(int mat[][10], int n)
{
    for (int i = 0; i < n; i++){
        sortVect(mat[i], n);
    }
}

void ordenarMatriz(int mat[][10], int n){
    ordenarFila(mat, n);

    transpose(mat, n);

    ordenarFila(mat, n);

    transpose(mat, n);
}



// Driver program to test above 
int main(){
    int mat[][10] = { { 4, 1, 3 },
                      { 9, 6, 8 },
                      { 5, 2, 7 } };
    int n = 3;

    printf("Matriz inicial\n");
    imprimirMatriz(mat, n);

    ordenarMatriz(mat, n);

    printf("\nMatriz Ordenada:\n");
    imprimirMatriz(mat, n);

    return 0;
} 