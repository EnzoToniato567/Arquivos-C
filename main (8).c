//biblioteca

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); 
    
    float peso, altura, imc;
    printf("Insira o seu peso (kg):\n");
    scanf("%f", &peso);
    printf("Insira a sua altura (m):\n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Abaixo do peso %.2f kg:\n", imc);
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("O peso está normal %.2f kg:\n", imc);
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Você está acima do peso %.2f kg:\n", imc);
    } else {
        printf("Sua situação é de obesidade %.2f kg:\n", imc);
    }

    return 0;
}
