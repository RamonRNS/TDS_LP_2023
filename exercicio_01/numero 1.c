#include <stdio.h>
#include <stdlib.h>

void soma(float a, float b) {
    float resultado = a + b;  //opera��o matematica
    printf("O resultado da soma �: %.2f\n", resultado);
    fflush(stdin);  //limpa o buffer de saida
    getchar();
}

void subtracao(float c, float d) {
    float resultado = c - d;  //opera��o matematica
    printf("O resultado da subtra��o �: %.2f\n", resultado);
    fflush(stdin);  //limpa o buffer de saida
    getchar();
}

void multiplicacao(float e, float f) {
    float resultado = e * f; //opera��o matematica
    printf("O resultado da multiplica��o �: %.2f\n", resultado);
    fflush(stdin);  //limpa o buffer de entrada
    getchar();
}

void divisao(float g, float h) {
    if (h != 0) { //condi��o para que n�o haja divis�o por zero
        float resultado = g / h;  //opera��o matematia
        printf("O resultado da divis�o �: %.2f\n", resultado);
    } else {
        printf("Erro: Divis�o por zero.\n");
    }
    fflush(stdin);  //limpa o bueffer de sa�da
    getchar();
}

void media(float a, float b, float c) {
    float total = (a + b + c) / 3; //opera��o matematica
    printf("A m�dia �: %.2f\n\n", total);
    fflush(stdin);  //limpa o buffer de entrada
    getchar();
}

void fibonacci(int numero) {
    int cont; //atua como contador no for
    //variaveis utilizadas para serem somadas
    int atual = 1;
    int anterior = 1;
    int result;

    printf("A sequ�ncia � de %d %d ", atual, anterior); //os dois primeiros numeros ser�o 1

    for (cont = 1; cont <= numero - 2; cont++) { //opera��o matematica
        result = anterior + atual;
        anterior = atual;
        atual = result;
        printf(" %d ", result);
    }
    printf("\n");
    fflush(stdin);  //limpa o buffer de saida;
    getchar();
}

int main() {
    int operador;
    float valor1, valor2, valor3;

    do {
        printf("\nMINI CALCULADORA!\n");
        printf("Digite o numero da opera�ao que deseja (0 para sair):\n");
        printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
        printf("5 - Media\n6 - Sequencia de Fibonacci\n\n");
        scanf("%d", &operador);  //define qual vai ser o tipo de opera��o escolhido pelo usuario

        //o switch case escaneia  os valores definidos pelo usuario e com eles abre a sua respectiva fun��o
        switch (operador) {
            case 1:
                printf("Digite o primeiro valor: ");
                scanf("%f", &valor1);
                printf("Digite o segundo valor: ");
                scanf("%f", &valor2);
                soma(valor1, valor2);
                break;
            case 2:
                printf("Digite o primeiro valor: ");
                scanf("%f", &valor1);
                printf("Digite o segundo valor: ");
                scanf("%f", &valor2);
                subtracao(valor1, valor2);
                break;
            case 3:
                printf("Digite o primeiro valor: ");
                scanf("%f", &valor1);
                printf("Digite o segundo valor: ");
                scanf("%f", &valor2);
                multiplicacao(valor1, valor2);
                break;
            case 4:
                printf("Digite o primeiro valor: ");
                scanf("%f", &valor1);
                printf("Digite o segundo valor: ");
                scanf("%f", &valor2);
                divisao(valor1, valor2);
                break;
            case 5:
                printf("Digite a primeiro valor: ");
                scanf("%f", &valor1);
                printf("Digite a segundo valor: ");
                scanf("%f", &valor2);
                printf("Digite a terceiro valor: ");
                scanf("%f", &valor3);
                media(valor1, valor2, valor3);
                break;
            case 6:
                printf("Digite um numero: ");
                scanf("%d", &operador);
                fibonacci(operador);
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opera��o inv�lida. Tente novamente.\n");
                break;
        }

    } while (operador != 0); //fecha o programa

    return 0;
}
