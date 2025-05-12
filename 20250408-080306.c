#include <stdio.h>
#include <string.h>

int main() {
 char cad[20];
    int i, j, N;
    printf("Introduce una palabra: \n");
    gets(cad); 
    N = strlen(cad);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}