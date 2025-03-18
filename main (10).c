//biblioteca

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int opcao;

    do {
        printf("Bem-vindo ao nosso sistema:\n");
        printf("Escolha uma das opções seguintes:\n");
        printf("1. Fazer check-in\n");
        printf("2. Ver planos de quarto\n");
        printf("3. Fazer um pedido\n");
        printf("4. Sair\n");
        printf("Digite o número da opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Você escolheu fazer check-in:\n");
                printf("Check-in realizado com sucesso!\n");
                break;

            case 2:
                printf("Você escolheu ver planos de quarto:\n");
                printf("Opções disponíveis:\n");
                printf("1 - Quarto econômico\n");
                printf("2 - Quarto extremamente confortável\n");
                printf("3 - Suíte\n");
                printf("4 - Nenhuma das opções\n");
                printf("Escolha uma das opções: ");
                scanf("%d", &opcao);
                switch (opcao) {
                    case 1:
                        printf("Você escolheu quarto econômico.\n");
                        break;
                    case 2:
                        printf("Você escolheu quarto extremamente confortável.\n");
                        break;
                    case 3:
                        printf("Você escolheu suíte.\n");
                        break;
                    case 4:
                        printf("Você não escolheu nenhuma opção.\n");
                        break;
                    default:
                        printf("Opção inválida.\n");
                }
                break;

            case 3:
                printf("Você escolheu fazer um pedido:\n");
                printf("Opções disponíveis:\n");
                printf("1 - Cardápio do nosso restaurante\n");
                printf("2 - Atendimento urgente\n");
                printf("3 - Bebidas (água, refrigerante, suco, etc.)\n");
                printf("4 - Nenhuma das opções\n");
                printf("Escolha uma das opções: ");
                scanf("%d", &opcao);
                switch (opcao) {
                    case 1:
                        printf("Você escolheu cardápio do nosso restaurante.\n");
                        break;
                    case 2:
                        printf("Você escolheu atendimento urgente.\n");
                        break;
                    case 3:
                        printf("Você escolheu bebidas.\n");
                        break;
                    case 4:
                        printf("Você não escolheu nenhuma opção.\n");
                        break;
                    default:
                        printf("Opção inválida.\n");
                }
                break;

            case 4:
                printf("Você escolheu sair. Obrigado por usar nosso sistema!\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
