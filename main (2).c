//biblioteca

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); 

    int número;  
    printf("Insira o seu número:\n");
    scanf("%d", &número);  
    
    if (número % 2 == 0) {
        printf("%d é par\n", número);
    } else {
        printf("%d é ímpar\n", número);
    }

    return 0; 
}
