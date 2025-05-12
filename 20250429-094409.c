#include <stdio.h>

struct CD {
    char titulo[100];
    char artista[50];
    char año[20];
    char precio[100];
};
int main (void)
{
    struct CD cd1,anio, artista,precio;
    printf("ingresa el titulo\n");
    scanf ("%s",cd1.titulo);
    printf("ingresa el año\n");
    scanf ("%s",cd1.año);
    printf("ingresa número de canciones\n");
    scanf ("%s",cd1.artista);
    printf("ingresa el precio\n");
    scanf("%s",cd1.precio);
    printf("título es:%s\n",cd1.titulo);
    printf("el año es:%s\n", cd1.año);
    printf("el número de canciones es:%s\n",cd1.artista);
    printf("el precio es:%s\n",cd1.precio);
    return 0;
}