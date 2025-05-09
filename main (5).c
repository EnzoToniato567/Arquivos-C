//biblioteca

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); 
    
    float idade;
    printf("Insira sua idade:\n");
    scanf("%f", &idade);
    
    if (idade < 16) {
        printf("Você não pode votar:\n");
    } else if ((idade == 16 || idade == 17) || idade > 70) {
        printf("O voto é opcional.\n");
    } else if (idade >= 18 && idade <= 70) {
        printf("O voto é obrigatório:\n");
    } else {
        printf("Entrada inválida.\n");
    }
    
    return 0;
}

