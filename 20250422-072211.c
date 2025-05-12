#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100];
    char palabra2[100];
    char palabra11[1000];
    int N;

    printf("Ingresa la primera palabra: ");
    scanf("%s", palabra1);
    printf("Ingresa la segunda palabra: ");
    scanf("%s", palabra2);
    N = strlen(palabra1);  
    strcat(palabra11, palabra1); 
    for (int i = 0; i < N; i++) {
        strcat(palabra11, palabra2); }
    printf("Palabra11: %s\n", palabra11);
    return 0;
}