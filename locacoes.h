#ifndef LOCACOES_H
#define LOCACOES_H

#include "clientes.h"

typedef struct {
    int idCliente;
    char filme[100];
    char data[11];
} Locacao;

void realizarLocacao(Locacao *locacao, int *conta, Cliente *clientes, int totalClientes);
void listarLocacoes(Locacao *locacoes, int contLocacoes);
void buscarLocacoesPorCliente(Locacao *locacoes, int totalLocacoes, int idCliente);

#endif