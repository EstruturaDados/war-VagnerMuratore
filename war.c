#include <stdio.h>
#include <string.h>

// ------------------------------------------------------------
// Estrutura que representa um território
// Contém o nome, a cor do exército e a quantidade de tropas
// ------------------------------------------------------------
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio territorios[5]; // Vetor para armazenar 5 territórios
    int i;

    printf("=== Cadastro de Territórios ===\n\n");

    // ------------------------------------------------------------
    // Entrada de dados: o usuário informa os dados de 5 territórios
    // ------------------------------------------------------------
    for (i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);

        printf("Informe o nome do território: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; // Remove o '\n'

        printf("Informe a cor do exército: ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0'; // Remove o '\n'

        printf("Informe a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        // Limpar o buffer do teclado após scanf
        while (getchar() != '\n');

        printf("\n");
    }

    // ------------------------------------------------------------
    // Exibição dos dados cadastrados
    // ------------------------------------------------------------
    printf("\n=== Territórios Cadastrados ===\n\n");
    for (i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}

