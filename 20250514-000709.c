# include <stdio.h>

   int * p,y;
   void func()
   {
   int x=40;
   p= &x;
   y=*p;
   *p=23;
   }
   int main (void)
   {
   func ();
   y=*p;
   *p=25;
   
   printf("el valor de y es %d\n  el valor *p es %d\n el vapor de p es %p",y,*p,p);
   
   return 0;
   }