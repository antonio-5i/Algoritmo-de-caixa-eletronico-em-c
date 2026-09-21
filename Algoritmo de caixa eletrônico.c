/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
    // na primeira etapa nós vamos declarar o valor das variaveis
int main() {
    int saldo = 1000;
    int saque;
    int notas100, notas50, notas20, notas10, notas5;
    int valor_valido = 0; // Variável para controlar o loop

    printf("===== CAIXA ELETRONICO =====\n");
    printf("Saldo disponivel: R$ %d,00\n", saldo);

    // O laço vai se repetir enquanto o valor NÃO for válido
    do {
        printf("\nDigite o valor que deseja sacar: R$ ");
        scanf("%d", &saque);

        // Verifica se o valor é menor ou igual a zero
        if (saque <= 0) {
            printf("Erro: o valor do saque deve ser maior que zero. Tente novamente.\n");
        }
        // Verifica se o valor é maior ou igual ao saldo
        else if (saque > saldo) {
            printf("Erro: saldo insuficiente. Tente novamente.\n");
        }
        // Verifica se o valor é multiplo de 5
        else if (saque % 5 != 0) {
            printf("Erro: o valor do saque deve ser multiplo de 5. Tente novamente.\n");
        }
        else {
            // Se passou por todas as validações, o valor é válido!
            valor_valido = 1;
        }

    } while (valor_valido == 0); // Repete se ainda não for válido

    // Calcula a quantidade de cada nota após o sucesso
    notas100 = saque / 100;
    saque = saque % 100;

    notas50 = saque / 50;
    saque = saque % 50;

    notas20 = saque / 20;
    saque = saque % 20;

    notas10 = saque / 10;
    saque = saque % 10;

    notas5 = saque / 5;

    printf("\nSaque realizado com sucesso!\n");
    printf("Distribuicao das notas:\n");

    if (notas100 > 0) printf("Notas de R$ 100: %d\n", notas100);
    if (notas50 > 0)  printf("Notas de R$ 50: %d\n", notas50);
    if (notas20 > 0)  printf("Notas de R$ 20: %d\n", notas20);
    if (notas10 > 0)  printf("Notas de R$ 10: %d\n", notas10);
    if (notas5 > 0)   printf("Notas de R$ 5: %d\n", notas5);

    return 0;
}
