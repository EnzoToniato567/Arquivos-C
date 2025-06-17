#include <stdio.h>
#include <stdlib.h>
#include "clientes.h"
#include "locacoes.h"

void cadastrarCliente(Cliente *clientes, int *totalClientes) {
    
    printf ("----Menu cadastro----\n");
    printf ("Id do cliente:\n");
    scanf ("%d", &clientes[*totalClientes].idCliente);
    printf ("Nome do cliente:\n");
    scanf ("%s", clientes[*totalClientes].nome);
    printf ("Telefone do cliente:\n");
    scanf ("%d", &clientes[*totalClientes].numTelefone);
    (*totalClientes)++;
    printf ("Cliente cadastrado com sucesso!\n");
}

void listarClientes(Cliente *clientes, int totalClientes) {
    
    printf ("----Menu cliente----\n");
    
    if (totalClientes == 0) {
        printf("Nenhum cliente cadastrado\n");
        return;
    }

    for (int i = 0; i < totalClientes; i++) {
        printf ("Id do cliente: %d\n", clientes[i].idCliente);
        printf ("Nome do cliente: %s\n", clientes[i].nome);
        printf ("Telefone do cliente: %d\n", clientes[i].numTelefone);
    }
}

void buscarClientePorID(Cliente *clientes, int totalClientes, int idCliente) {
    
    int encontrado = 0;
    
    for (int i = 0; i < totalClientes; i++) {
        if (clientes[i].idCliente == idCliente) {
            encontrado = 1;
            printf ("Cliente encontrado:\n");
            printf ("Id do cliente: %d\n", clientes[i].idCliente);
            printf ("Nome do cliente: %s\n", clientes[i].nome);
            printf ("Telefone do cliente: %d\n", clientes[i].numTelefone);
            break;
        }
    }
    if (encontrado == 0) {
        printf ("Cliente com o id %d não encontrado.\n", idCliente);
    }
}