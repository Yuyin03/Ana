 #include <stdio.h>
#include <time.h>

int main() {
  clock_t inicio_tiempo = clock();


  clock_t fin_tiempo = clock();
  double tiempo_transcurrido = (double)(fin_tiempo - inicio_tiempo) / CLOCKS_PER_SEC;
  double tiempo_milisegundos = tiempo_transcurrido * 1000;

  printf("Tiempo transcurrido: %.2f milisegundos\n", tiempo_milisegundos);
  return 0;
}