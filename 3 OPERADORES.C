//OPERADORES, Entrada y Salida
#include <stdio.h>

int main(){
//Aritmeticos
// + SUMA
// - RESTA
// * MULTIPLICACION
// / DIVISION (COEFICIENTE)
// % MODULO (RESIDUO DE DIVISION)

//JERARQUIA
// () -> * -> % -> / -> + -> -
//Ejemplos
    printf("%d\n", (3 - 4) * 5 );
    printf("%d\n", 3 * -2 );
    printf("%d\n", 17 % 3 );
    printf("%d\n", -42 + 50 % 17 );
    printf("%d\n", -12.6 / 3.0 + 3.0 );

//OPERADORES LOGICOS
//  && AND, Conjunción
//  || OR, Disjunción
//  !  NOT, Negación
/*
 V && V = V
 F && V = F
 V && F = F
 F && F = F

 V || V = V
 F || V = V
 V || F = V
 F || F = F

 !V = F
 !F = V
*/

//COMPARATIVOS
//  <, < =, >, > =, = =, ! =

if ( (5 > 0) && (1==1) ){
    printf("Es VERDADERO");
} else {
    printf("Es FALSO");
}

//INCREMENTO Y DECREMENTO
    int contador = 0;
    printf("Iniciar contador en:");
    scanf("%i", &contador);
    contador++; //Aumenta en 1
    printf("%i", contador);
    contador--; //Disminuye en 1
    printf("%i%i%i%i%s", contador, 1, 2,3,"OTRA VARIABLE");


//PRINTF
// http://www.cplusplus.com/reference/cstdio/printf/

//SCANF
// https://www.tutorialspoint.com/c_standard_library/c_function_scanf.htm


}