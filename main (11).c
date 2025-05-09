//biblioteca

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); 
    
    float idade;
    printf("Insira sua idade:\n");
    scanf("%f", &idade);
    
    if (idade >= 18) {
        printf("Parabéns! Você é adulto.\n");
    } else if (idade < 18) {
        printf("Sinto lhe informar... Você ainda é criança.\n");
    } else {
        printf("Entrada inválida.\n");
    }
    
    return 0;
}

