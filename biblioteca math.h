/*7. Escreva um algoritmo que leia um valor inteiro e mostre sua raiz quadrada.*/

#include <stdio.h>
#include <math.h>

int main () {
 float n;
  printf("Digite o valor de n: \n");
   scanf("%f", &n);
    n = sqrt(n);
     printf("Sua raiz quadrada e: %.2f\n", n);

return 0;

} 
