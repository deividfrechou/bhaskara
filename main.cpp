#include <stdio.h>
#include <math.h>

int main() {
   float a, b, c, delta, x1, x2;

   printf("Digite o valor de a: ");
   scanf("%f", &a);

   printf("Digite o valor de b: ");
   scanf("%f", &b);

   printf("Digite o valor de c: ");
   scanf("%f", &c);

   delta = (b * b) - (4 * a * c);

   if (delta < 0) {
      printf("A equacao nao possui raizes reais.");
   }
   else if (delta == 0) {
      x1 = (-b) / (2 * a);
      printf("A equacao possui uma raiz real: %.2f", x1);
   }
   else {
      x1 = (-b + sqrt(delta)) / (2 * a);
      x2 = (-b - sqrt(delta)) / (2 * a);
      printf("A equacao possui duas raizes reais: %.2f e %.2f", x1, x2);
   }
    pause;
   return 0;
}
