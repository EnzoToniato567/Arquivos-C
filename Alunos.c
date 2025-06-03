//biblioteca

#include <stdio.h>
#include <stdlib.h>

#include "Alunos.h"


void cadastrar_aluno(Aluno *aluno, int *conta) {
	
	printf ("----Cadastrar aluno----\n");
	printf ("Informe a matrícula do aluno: \n");
	scanf ("%d", &aluno->matricula);
	printf ("Informe o nome do aluno: \n");
	scanf(" %[^\n]", aluno->nome);
	(*conta)++;
}