#include <stdio.h>
#include <stdlib.h>
#include "../includes/aluno.h"

Turma *alocarMemoriaAlunos() {
    Turma *turma = (Turma *) malloc(sizeof(Turma));

    if (turma != NULL) {
        turma->alunos = (Aluno *) malloc(10 * sizeof(Aluno));
        turma->quantidadeAlunos = 0;
        turma->capacidade = 10;
    } else {
        puts("\nFalha ao alocar memoria - funcao: Turma *alocarMemoriaAlunos()\n");
    }
    return turma;
}

int realocarMemoriaAlunos(Turma *turma, int novaCapacidade) {
    Aluno *alocarMaisAlunos = realloc(turma->alunos, novaCapacidade * sizeof(Aluno));

    if (alocarMaisAlunos != NULL) {
        turma->alunos = alocarMaisAlunos;
        turma->capacidade += novaCapacidade;

        puts("alocado mais 10 novas capacidades de registro em struct Aluno");

        return 0;
    }
    return 1;
}

Turma *liberarMemoriaAlunos(Turma *turma) {
    free(turma->alunos);
    free(turma);
}

void inserirInicio(Aluno aluno, Turma *turma) {
    int counter = 0;

    if (turma->quantidadeAlunos >= turma->capacidade) {
        int status = realocarMemoriaAlunos(turma, 10);

        if (status == 1) {
            return 1;
        }
        counter++;
    }

    if (counter == 0) {
        turma->capacidade = 10;
        counter++;
    }

    for (int i = turma->quantidadeAlunos; i > 0; i--) {
        turma->alunos[i] = turma->alunos[i - 1];
    }

    turma->alunos[0] = aluno;
    turma->quantidadeAlunos++;

    return 0;
}