#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); 

    float número;
    printf("Insira o seu número:\n");
    scanf("%f", &número); 
    
    if (número > 0) {
        printf("%.2f é positivo\n", número);
    } else if (número == 0) {
        printf("%.2f é zero\n", número); 
    } else { 
        printf("%.2f é negativo\n", número);
    }

    return 0; 
}
