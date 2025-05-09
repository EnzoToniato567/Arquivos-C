//biblioteca

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); 
    
    float compra, valorFinal; 
    printf("Insira o valor da compra:\n");
    scanf("%f", &compra); 

    if (compra > 500.00) {
        valorFinal = compra * 0.90;
        printf("Você recebeu um desconto de 10%%. O valor final é:%.2f\n", valorFinal);
    } else if (compra >= 200.00 && compra <= 500.00) {
        valorFinal = compra * 0.95; 
        printf("Você recebeu um desconto de 5%%. O valor final é:%.2f\n", valorFinal);
    } else {
        valorFinal = compra; 
        printf("Sem desconto. O valor final é:%.2f\n", valorFinal);
    }

    return 0;
}
