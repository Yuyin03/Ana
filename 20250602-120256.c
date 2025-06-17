#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int *arreglo;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);
    arreglo = (int *)malloc(x * sizeof(int));
    if (arreglo == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    for (int i = 0; i < x; i++) {
        printf("Ingrese el valor para el elemento %d: ", i);
        scanf("%d", arreglo + i); 
    }
    printf("Valores del arreglo:\n");
    for (int i = 0; i < x; i++) {
        printf("%d ", *(arreglo + i)); 
    }
    printf("\n");
    free(arreglo);
    return 0;
}