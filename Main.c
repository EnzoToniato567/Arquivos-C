//biblioteca

#include <stdio.h>
#include <locale.h>

#include "Alunos.h"
#include "Notas.h"

int main () {

	Aluno alunos[10];
	Nota notas[50];
	int opcao;
	int contAluno = 0, contNota = 0;
	
	do {
		printf ("----Sistema escolar----\n");
		printf ("1 - Cadastrar aluno\n");
		printf ("2 - Cadastrar nota\n");
		printf ("3 - Calcular média\n");
		printf ("0 - Sair\n");
		printf ("Escolha uma opção:\n");
		scanf("%d", &opcao);

		switch (opcao) {
		case 1:
			cadastrar_aluno(&alunos[contAluno], &contAluno);
			break;

		case 2:
			cadastrar_nota(&notas[contNota], &contNota);
			break;

		case 3:
			calcular_media(alunos, notas, contAluno, contNota);
			break;

		case 0:
			printf ("Você saiu do menu.\n");
			break;

		default:
			printf ("Opção inválida.\n");
			break;
		}

	} while (opcao != 0);

	return 0;
}
