#include <stdio.h>

int main()
 {
    float HST, PH, sal;
    printf("Ingrese las horas semanales trabajadas: ");
    scanf("%f", &HST);
    printf("Ingrese el precio por hora: ");
    scanf("%f", &PH);
    if (HST <= 40) 
        sal = HST * PH;
     else
      sal = (40 * PH) + (PH * 1.5 * (HST - 40));
    printf("El salario semanal es: %f\n", sal);
    return 0;
}