    #include <stdio.h>

int main() {
    int somaTotal = 0;


    for (int i = 1; i <= 9; ++i) {
        printf("Tabuada do %d:\n", i);

        for (int j = 1; j <= 10; ++j) {
            int resultado = i * j;
            printf("%d x %d = %d\n", i, j, resultado);

            somaTotal += resultado;
        }

        printf("\n");
    }


    printf("Soma total das multiplicacoes: %d\n", somaTotal);


}
