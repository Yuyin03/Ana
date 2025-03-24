#include <stdio.h>

int main() 
{
    int numero =1;
    printf("numero\cuadrado\cubo\n");
     while ( numero <= 500 ){
     printf ("%d, %d, %d \n", numero, numero * numero, numero * numero * numero);
    numero ++;
    }
    return 0;

}