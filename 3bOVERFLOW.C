#include <stdio.h>

int main(){
    int variableDesbordada = 1232317892398127;
    printf("El valor deberia ser 1232317892398127, pero al desbordarse nos dio: %i", variableDesbordada);
    float variableUnderflow = 1.000000000000001 * 3.0000003;
    printf("La operacion 1.00000000000051 * 3.0000003 nos dio: %lf,"
           " ya que se descartaron los ultimos numeros por underflow", variableUnderflow);

}
