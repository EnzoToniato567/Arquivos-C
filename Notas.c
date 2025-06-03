//biblioteca

#include <stdio.h>
#include <stdlib.h>

#include "Alunos.h"
#include "Notas.h"

void cadastrar_nota(Nota *nota, int *conta) {
	
	printf ("----Cadastrar nota----\n");
	printf ("Informe a matrícula do aluno: \n");
	scanf ("%d", &nota->matricula);
	printf ("Informe a nota do aluno: \n");
	scanf ("%f", &nota->nota);
	(*conta)++;
}


void calcular_media(Aluno alunos[], Nota notas[], int contAluno, int contNota) {
	
	int matricula, qntNotas = 0;
	float media;

	printf ("----Calcular média----\n");
	printf ("Informe a matrícula do aluno: \n");
	scanf ("%d", &matricula);

	for (int i = 0; i < contAluno; i++) {
		if (alunos[i].matricula == matricula) {
			printf ("Nome: %s\n", alunos[i].nome);
			break;
		}
	}

	for (int i = 0; i < contNota; i++) {
		if (notas[i].matricula == matricula) {
			media += notas[i].nota;
			qntNotas++;
		}
	}
    
    printf ("Média = %.2f", (media / qntNotas));
    
}