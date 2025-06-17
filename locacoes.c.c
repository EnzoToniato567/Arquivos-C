#include <stdio.h>
#include <stdlib.h>
#include "locacoes.h"
#include "clientes.h"

void realizarLocacao(Locacao *locacao, int *conta, Cliente *clientes, int totalClientes) {  
    
    printf("---Realizar Locações---\n");
    printf("ID do cliente: ");
    scanf("%d", &locacao[*conta].idCliente);
    printf("Informe o nome do filme: ");
    scanf("%s", locacao[*conta].filme);
    printf("Informe a data: ");
    scanf("%s", locacao[*conta].data);
    (*conta)++;
    printf("Locação Realizada com Sucesso\n");
}

void listarLocacoes(Locacao *locacoes, int contLocacoes) {
    
    printf("---Lista de Locações---\n");
    
    for (int i = 0; i < contLocacoes; i++) {
        printf("ID do cliente: %d\n", locacoes[i].idCliente);
        printf("Nome do Filme: %s\n", locacoes[i].filme);
        printf("Data: %s\n", locacoes[i].data);
        printf("-----------------------------\n");
    }
}

void buscarLocacoesPorCliente(Locacao *locacoes, int totalLocacoes, int idCliente) {
    
    int encontrado = 0;
    
    printf("---Buscar Locações por Cliente---\n");
    for (int i = 0; i < totalLocacoes; i++) {
        if (locacoes[i].idCliente == idCliente) {
            encontrado = 1;
            printf("ID do cliente: %d\n", locacoes[i].idCliente);
            printf("Filme: %s\n", locacoes[i].filme);
            printf("Data: %s\n", locacoes[i].data);
        }
    }
    if (encontrado == 0) {
        printf("Nenhuma locação encontrada com o id %d.\n", idCliente);
    }
}