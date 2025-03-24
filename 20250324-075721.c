#include <stdio.h> 
#include <stdlib.h>

int main() 
{ 
int w = 9; 
int x = 3; 
int y = 7; 
int z = 2;

printf("x < y AND w > z: %d\n",( x < y) && (w > z));
printf("x >=w XOR z==y:%d\n",( x >= w)^(z==y));
printf("y <=x OR x == w:%d\n",(y <= x)||(x == w));
printf("w == 9 OR x == 3: %d\n",(w==9)||(x==3));
printf("y > z AND z < x: %d\n", (y>z) &&(z<x));
printf("NOT w!=9: %d\n", !(w != 9));
return 0;
}