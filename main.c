
#include <stdio.h>

int main() {

    int opcao;
    float saldo = 0;

    do {
        printf("\n===== COFRINHO DIGITAL =====\n");
        printf("1 - Adicionar R$ 0,50\n");
        printf("2 - Adicionar R$ 1,00\n");
        printf("3 - Adicionar R$ 2,00\n");
        printf("0 - Encerrar\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                saldo += 0.50;
                printf("Moeda de R$ 0,50 adicionada!\n");
                break;

            case 2:
                saldo += 1.00;
                printf("Moeda de R$ 1,00 adicionada!\n");
                break;

            case 3:
                saldo += 2.00;
                printf("Moeda de R$ 2,00 adicionada!\n");
                break;

            case 0:
                printf("\nEncerrando cofrinho...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("\n===== SALDO FINAL =====\n");
    printf("Total acumulado: R$ %.2f\n", saldo);

    return 0;
}
