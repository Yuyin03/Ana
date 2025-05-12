#include <stdio.h>
#include <math.h>

double areaTriangulo(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    return area;
   }
   int main() {
    double a, b, c;

    printf("Coloca un lado del triangulo:\n");
    scanf(" %lf", &a);
    printf("Coloca un lado del triangulo:\n");
    scanf(" %lf", &b);
    printf("Coloca un lado del triangulo:\n");
    scanf(" %lf",  &c);

    double area = areaTriangulo(a, b, c);
    printf("El area del triangulo es: %.2lf\n", area);

    return 0;
 }