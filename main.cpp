#include <iostream>
#include <cstring>
#include "prototipo_de_funciones.h"

int main() {
   char c1[5] = "abcd";
   char c2[5] = "abca";
   char* pstr1;
   char* pstr2;
   pstr1 = &c1[0];
   pstr2 = &c2[0];

   std::cout << strcmp(pstr1,pstr2) << std::endl;


   double no_absoluto;
   unsigned long numero_entero;
   unsigned long el_factorial;

/*
   std::cout <<  "Escriba un numero entero: "  << std::endl;
   std::cin >> numero_entero;

   el_factorial = factorial(numero_entero);

   std::cout << el_factorial << "\n" << std::endl;
   printf ("el factorial de su numero es: %ld \n", el_factorial);
}

unsigned long factorial(unsigned long n){
   if (n == 1 || n == 0)
      return 1;
   else return
      (n * factorial (n-1));
}

void valor_abs(double &x){
   x = 5;
}
*/



}