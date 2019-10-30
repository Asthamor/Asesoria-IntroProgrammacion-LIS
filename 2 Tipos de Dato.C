
//TIPOS DE DATO
#include <stdio.h>

int main(){
/*    //ENTEROS
    int entero;
    short numPequeño;
    long numGrande;
    //CARACTERES
    char letra;
    //ENTEROS SIN SIGNO
    unsigned int numSinSigno;
    //FLOTANTES
    float conDecimal;
    double decGrande;
*/
//    DECLARACION Y ASIGNACION

    //ENTEROS
    int entero = 32767;    //IMPORTANTE
    short numPequenio = 32767;
    long numGrande = 2147483647;
    //CARACTERES
    char letra = 'C';        //Interpretada como CODIGO ASCII https://www.ascii-code.com/   //IMPORTANTE
    //ENTEROS SIN SIGNO
    unsigned int numSinSigno = 65535;
    //FLOTANTES
    float conDecimal = 32767.826733; //Hasta 6 decimales         //IMPORTANTE
    double decGrande = 3.141592653589793; //Hasta 15 decimales   //IMPORTANTE

    int edadMinima = 18;

    //Constantes
    const double PI = 3.141592653589793;
    const float GRAVEDAD = 9.81;
    const int PORCENTAJE_IVA = 16; //Los datos declarados con const no pueden cambiar
    //Las constantes no pueden ser declaradas sin asignación

    //NO CONFUNDIR OPERADORES DE =
    //= es asignación, == es un comparador
    //La parte derecha de la asignación puede ser otra variable, dato o una expresión

    printf("%i\n", edadMinima);

    //Se debe declarar una variable antes de usarla
    //Es recomendable realizar una asignación para limpiar cualquier valor que pueda haber quedado en esa dirección de memoria
    //El valor puede cambiar en cualquier momento
    edadMinima = 21;
    //No se puede tener más de una variable con el mismo nombre
    //int edadMinima = 16;
    //No se puede cambiar el tipo de dato de una variable
    //char edadMinima = '9';

    //Overflow de variable
    //Un numero muy grande para almacenar en una variable, no va a causar error, pero va a causar un desborde,
    //los datos serán escritos en la direccion de memoria contigua, causando problemas en ejecución

    printf("%i\n", edadMinima);


    //LITERAL VS VARIABLES

    //Las literales son valores escritos directamente en el código
    printf("%i\n", 1442);
    //Usando variables podemos cambiar los datos que se usan en nuestro código
    char nombreCompleto[50];
    printf("Escribe tu nombre completo\n");
    scanf("%s", &nombreCompleto);
    printf("Hola, %s! ", nombreCompleto);

}