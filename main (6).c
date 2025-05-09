//biblioteca

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float lado1, lado2, lado3;
    printf("Insira o primeiro lado:\n");
    scanf("%f", &lado1);
    printf("Insira o segundo lado:\n");
    scanf("%f", &lado2);
    printf("Insira o terceiro lado:\n");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("O triângulo é equilátero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triângulo é isósceles.\n");
    } else {
        printf("O triângulo é escaleno.\n");
    }

    return 0;
}
