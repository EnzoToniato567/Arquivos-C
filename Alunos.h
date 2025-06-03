#ifndef ALUNOS_H
#define ALUNOS_H

typedef struct {
	int matricula;
	char nome[30];
} Aluno;

void cadastrar_aluno(Aluno *aluno, int *conta); 

#endif


