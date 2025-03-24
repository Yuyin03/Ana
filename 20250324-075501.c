#include <stdio.h>
#include <stdlib.h>
int main()
 {
    double resultado;
    double x= 2.0 - (1.0 / 4.0);
    double y= 1.0 + (1.0 / x);
    double z = 2.0 / y;
    resultado = 5.0 + (2.0 / z);
    
    printf("%.2f\n", resultado);

    return 0;
}