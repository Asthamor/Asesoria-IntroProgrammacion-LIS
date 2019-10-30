    //C y C++ permiten mezclar tipos de datos en las operaciones, y eso causa algunos comportamientos interesantes que debemos conocer

    #include <stdio.h>

    int main ( )
    {
        int personas;
        float cuenta;
        float pagoIndividual;

        printf("Entre cuantos se dividira la cuenta?");
        scanf("%d", &personas);
    personas
        printf("Cuanto es el total?");
        scanf("%f", &cuenta);

        pagoIndividual = cuenta / personas; // Personas es promovido a float para poder hacer la operacion
        printf("Cada uno debe pagar $%f de la cuenta", pagoIndividual);
        
        return 0;
    }