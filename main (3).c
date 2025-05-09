//biblioteca

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); 

    float n1, n2;
    printf("Insira o primeiro número:\n");
    scanf("%f", &n1);
    printf("Insira o segundo número:\n");
    scanf("%f", &n2);
    
    if (n1 > n2) {
        printf("O maior número é %.2f\n", n1);
    } else if (n2 > n1) {
        printf("O maior número é %.2f\n", n2);
    } else {
        printf("%.2f e %.2f são iguais\n", n1, n2);
    }
    
    return 0;
}
     