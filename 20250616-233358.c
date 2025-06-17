#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_PRODUCTOS 150

typedef struct {
    char nombre[100];
    float precio;
} Producto;

void tablasSinApuntadores() {
    clock_t inicio = clock();  

    printf("\n Tablas de multiplicar (1 al 10) sin apuntadores\n");
    for (int i = 1; i <= 10; i++) {
        printf("\nTabla del %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    clock_t fin = clock();  

    double ciclos = (double)(fin - inicio);
    double segundos = ciclos / CLOCKS_PER_SEC;

    printf("\nCiclos de reloj usados: %.0f\n", ciclos);
    printf("Tiempo aproximado: %.6f segundos\n", segundos);
}

void tablasConApuntadores() {
  clock_t inicio = clock();  
    int i, j;
    int *ptrI, *ptrJ;

    printf("\nTablas de multiplicar (1 al 10) con apuntadores\n");
    for (i = 1; i <= 10; i++) {
        ptrI = &i;
        printf("\nTabla del %d:\n", *ptrI);
        for (j = 1; j <= 10; j++) {
            ptrJ = &j;
            printf("%d x %d = %d\n", *ptrI, *ptrJ, (*ptrI) * (*ptrJ));
            }
          }
            
            clock_t fin = clock();  

    double ciclos = (double)(fin - inicio);
    double segundos = ciclos / CLOCKS_PER_SEC;

    printf("\nCiclos de reloj usados: %.0f\n", ciclos);
    printf("Tiempo aproximado: %.6f segundos\n", segundos);
    
}

void sistemaPOS() {
    Producto productos[MAX_PRODUCTOS];
    int cantidad;
    float total = 0;

    printf("\n¿Cuántos productos desea ingresar (máx %d)? ", MAX_PRODUCTOS);
    scanf("%d", &cantidad);

    if (cantidad <= 0 || cantidad > MAX_PRODUCTOS) {
        printf("Cantidad inválida.\n");
        return;
    }
    for (int i = 0; i < cantidad; i++) {
        printf("\nProducto #%d:\n", i + 1);
        printf("Nombre: ");
        scanf(" %[^\n]", productos[i].nombre); 
        printf("Precio: $");
        scanf("%f", &productos[i].precio);
        total += productos[i].precio;
    }
    float max = productos[0].precio;
    float min = productos[0].precio;
    printf("\n LISTADO DE PRODUCTOS\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%d. %s - $%.2f\n", i + 1, productos[i].nombre, productos[i].precio);
        if (productos[i].precio > max) max = productos[i].precio;
        if (productos[i].precio < min) min = productos[i].precio;
    }
    printf("\nTOTAL A PAGAR: $%.2f\n", total);
    printf("Precio MÁXIMO: $%.2f\n", max);
    printf("Precio MÍNIMO: $%.2f\n", min);
}
int main() {
    int opcion;
    do {
        printf("\nMENÚ PRINCIPAL\n");
        printf("1. Tablas del 1 al 10 (sin apuntadores + ciclos de reloj)\n");
        printf("2. Tablas del 1 al 10 (con apuntadores)\n");
        printf("3. Sistema POS (productos y precios)\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        switch(opcion) {
            case 1:
                tablasSinApuntadores();
                break;
            case 2:
                tablasConApuntadores();
                break;
            case 3:
                sistemaPOS();
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }
    } while (opcion != 4);

    return 0;
}