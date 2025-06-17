#ifndef CLIENTES_H
#define CLIENTES_H

typedef struct {
    char nome[30];
    int numTelefone;
    int idCliente;
} Cliente;

void cadastrarCliente(Cliente *clientes, int *totalClientes);
void listarClientes(Cliente *clientes, int totalClientes);
void buscarClientePorID(Cliente *clientes, int totalClientes, int idCliente);

#endif