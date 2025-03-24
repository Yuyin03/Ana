#include <stdio.h>
#include <stdlib.h>
int main() {
    double resultado;
    
    double d = 2.0 - (1.0 / 4.0);
    double c = 2.0 / d;
    double b= 1.0 + c;
    double a = 2.0 / b;
    resultado = 5.0 + a;
    printf("%.10f\n", resultado);
    
    return 0;
}