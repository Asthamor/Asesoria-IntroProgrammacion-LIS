#include <stdio.h>
//La definición de funciones también se puede dividir en dos, la "Definición" o "Creación de Prototipos"
//Y posteriormente la implementación de la función
// Si no se define antes del main, ese método no será accesible por el programa principal
int miFuncion();

void miProceso();
//Se pueden pasar datos externos a los metodos y funciones, a estos se les llama parámetros
int imprimirEstudiante(char nombre[], int edad, float altura, float bmi);

float indiceDeMasaCorporal(float altura, float peso){
    return peso / ( altura * altura );
}

int main(){
    char nombres[][100] = {
            "BRYAN JOSUE HERNANDEZ MARCIAL",
            "ANTONIO DE JESUS DOMINGUEZ GARCIA",
            "CARLOS ABRAHAM MARTINEZ GONZALES",
            "JOSE EMILIANO KURI GUZMAN",
            "KEVIN ALFONSO MONCAYO GUTIERREZ",
            "ALEJANDRO MONTERO DORANTES",
            "SAMUEL SUAREZ COLIN",
            "DAVID ALEXANDER MIJANGOS PAREDES"
    };
    int edades[] = { 20,21,20,19,18,20,19, 20 };

    float peso[] = { 55.3, 64.2, 55.3, 64.2, 55.3, 64.2, 55.3, 64.2 };
    float altura[] = { 1.70, 1.60,1.70, 1.60,1.70, 1.60,1.70, 1.60 };

    for(int i = 0; i < 8; i++){
        imprimirEstudiante(nombres[i], edades[i], altura[i], indiceDeMasaCorporal( altura[i], peso[i]));
    }
}

int miFuncion(){
    /* Aqui podría haber código */
    return 42; // si el tipo de funcion es diferente de void, debe regresar un dato de ese tipo de dato
}


int imprimirEstudiante(char nombre[], int edad, float altura, float bmi){
    printf("Nombre del Estudiante: %s,\tEdad :%i\t,Altura: %3.2lf, BMI: %lf\n", nombre, edad, altura, bmi);
}


