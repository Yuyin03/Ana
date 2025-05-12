#include <stdio.h>
int main() {
    for (int n = 1; n<= 10; n++) {
    }
    printf("\n");
    for (int n= 1; n<=10; n++) {
        for (int m = 1; m <= 10; m++) {
        printf(" %2d ", n * m);
        }
        printf("\n\n");
    } 
    return 0;
}