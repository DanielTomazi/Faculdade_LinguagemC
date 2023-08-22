#include <stdio.h>

  //leitura pelo teclado
  int main(void) {
  //primeiro vamos declarar as varáveis
  int valor1;
  int valor2;
  int resultado;

  //atribuir valores para as variáveis (=) pelo teclado
  /*o simbolo "&" antes da variável é para informar em qual 
  endereço o valor digitado deve ser guardado*/
  printf("\nDigite o primeiro número (n1): ");
  scanf("%d", &valor1);
  printf("\nDigite o segundo número (n2): ");
  scanf("%d", &valor2);
    

  resultado = (valor1 + valor2);
    
  printf("Resultado da soma é: %d\n", resultado);
  return 0;
}