#include <stdio.h>
#include <string.h>

int main() {
    char p1[15];
    char p2[15];
    char p3[15];
   printf("Palabra 1: "); scanf("%s", p1);
   printf("Palabra 2: "); scanf("%s", p2);
   printf("\nantes:\nPalabra_1 = '%s'\nPalabra_2 = '%s'\n", p1, p2);
   strcpy(p3, p1);
    strcpy(p1, p2); 
    strcpy(p2, p3);
   printf("\ndespues:\nPalabra_1 = '%s'\nPalabra_2 = '%s'\n", p1, p2);
    return 0;
}