#include <stdio.h>
#include <string.h>

int main() {
    char cadena[] = "Esta es una cadena 12312";

    char cadenaAux[strlen(cadena)];
    int tamCadena = strlen(cadena)-1;

    for(int i = 0; i <= tamCadena; i++){
        cadenaAux[i] = cadena[tamCadena-i];
    }
    cadenaAux[tamCadena+1] = '\0';
    strcpy(cadena, cadenaAux);


    printf("%s\n", cadena);


}