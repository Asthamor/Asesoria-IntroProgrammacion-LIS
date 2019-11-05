#include <stdio.h>
#include <process.h>
#include <stdlib.h>

int main(){
    srand(getpid());
    //Son posiciones de memoria contigua, es decir, se reservan varios espacios de memoria juntos
    char vectVocales[10]; // Quiero llenarlo con "AEIOUaeiou"
    int digitos[10] = { 0,1,2,3,4,5,6,7,8,9 };
    float decimals[10] = { 0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9 };
    //se puede acceder a cualquier posicion, especificando el indice entre los []
    //El indice inicia contando la primera posiciòn desde 0
    vectVocales[0] = 'A';
    vectVocales[1] = 'E';
    vectVocales[2] = 'I';
    vectVocales[3] = 'O';
    vectVocales[4] = 'U';
    vectVocales[5] = 'a';
    vectVocales[6] = 'e';
    vectVocales[7] = 'i';
    vectVocales[8] = 'o';
    vectVocales[9] = 'u';
    //Este caracter especial, indica que terminó la cadena
    vectVocales[10] = '\0';

    //Al imprimir con formato de cadenas %s no es necesario poner el & antes del nombre de variable
    printf("Esta linea imprime una cadena almacenada en vectVocales %s\n", vectVocales);

    printf("Podemos imprimir la dirección de memoria del arreglo %#x\n", &digitos);

    //llenar el arreglo de enteros con los multiplos de 8
    for(int i = 0; i < 10; i++){
        digitos[i] = rand();
    }
    for(int i = 0; i < 10; i++){
        printf("%i, ", digitos[i]);
    }
    printf("\n--------------------------------------\n");
    // imprimir el arreglo de floats
    printf("Imprimir numeros float en un arreglo\n");
    printf("_____________________________________________________________\n|");

    for(int i = 0; i < 10; i++){
        printf("%1.1f |", decimals[i]);
    }
    printf("\n-------------------------------------------------------------\n");

    //BUSQUEDAS
    /*Para buscar un elemento dentro de un vector, debemos realizar un recorrido,
     * comparamos cada uno de los elementos del arreglo, con el elemento deseado
     */
    char elementoABuscar = 'Z';
    int seEncontro = 0;
    int posicion = 0;
    for(int i = 0; i < 11; i++){
        if(vectVocales[i] == elementoABuscar){
            seEncontro = 1;
            posicion = i + 1;
        }
    }


    if (seEncontro){
        printf("Se encontro el elemento \"%c\" en la posicion %i del arreglo\n", elementoABuscar, posicion);
    } else{
        printf("No se encontro\n");
    }

    seEncontro = 0;
    int contador = 0;
    while( (contador < 11) && (seEncontro == 0) ){
        if(vectVocales[contador] == elementoABuscar){
            seEncontro = 1;
            printf("Se encontro el elemento \"%c\" en la posicion %i del arreglo\n", elementoABuscar, contador + 1);
        }
        contador++;
    }



    //HACER MAX y MIN


    //ORDENAMIENTO
    /*Para ordenar los elementos dentro del arreglo,
    podemos usar un algoritmo de ordenamiento en burbujas,
    se comparan cada par de elementos entre sí y el menor se asigna al indice menor
    */

    int numeros[] = { 1, 2, 5, 20, 23, 40, 50, 231 };
    int desordenado = 1;
    while (desordenado){
        desordenado = 0;
        for (int i = 0; i < 7 ; ++i) {
            if (numeros[i] > numeros[i+1]){
                int aux = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = aux;
                desordenado = 1;
            }
        }
    }
    printf("ARREGLO ORDENADO\n");
    for (int j = 0; j < 8 ; ++j) {
        printf("|%i|", numeros[j]);
    }


}