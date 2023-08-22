#include <stdio.h>

    // trabalhando com variáveis
    // declaração das varáveis
    // declarar a variável idade
    int idade = 24;
    int altura = 177;
    int a = 10;
    int b = 20;
    int c = 30;
    // fução principal do programa
    int main(void) {

    /*qualquer variável só é valida se declarada antes do seu
    uso*/
    // simbolo %d indica que o valor é um inteiro
    printf("A idade é: %d\n", idade, altura);

    // e se eu quiser mostrar dois valores?
    printf("A altura é: %d\n", altura);
    printf("João tem %d anos e sua altura é %d cm\n", idade, altura);
    /*o comando printf("Param1, param2, ...) precisa que seja
    informado o tipo do dado que será mostrado na
    tela/arquivo. Depois da virgula, devem ser informados
    variáveis")*/
    printf("%d%% %d\n", idade, altura);

    // exercicio
    /*
    1 - Criar três variaveis inteiras, atribuir valores para     elas e executar. 
    2 - Mostrar cada uma das operações 
    separadamente, e por fim, na
    mesma instrução.
    */

    int a = 10, b = 20, c = 30;

    int soma = a + b + c;
    int subtracao = a - b - c;
    int multiplicacao = a * b * c;
    int divisao = a / b / c;

    printf("Operações separadas:\n");
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);

    int resultado = a + b - c * a / b;
    printf("\nOperações na mesma instrução:\n");
    printf("Resultado: %d\n", resultado);

    // finaliza o programa
    return 0;
    }