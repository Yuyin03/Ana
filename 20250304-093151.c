#include <stdio.h>

int main() 
{
    int descuento =10;
    int descuentoCliente =20;
    int cliente =0;
    int z=0;
    z = (cliente) ? descuentoCliente : descuento;
    printf("El descuentos es de %d \% \n", z);
    printf("Fin del programa\n");
    return 0;

}