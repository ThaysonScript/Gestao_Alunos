#include <stdio.h>
#include "./includes/aluno.h"
#include "./includes/manipularArquivo.h"

int main(void) {
  Turma *turma = alocarMemoriaAlunos();

  Aluno aluno1;

  aluno1.matricula = 202021;
  aluno1.notas[0] = 3;
  aluno1.notas[1] = 7;
  aluno1.notas[2] = 4;
  aluno1.notas[3] = 10;
  aluno1.notas[4] = 2;
  aluno1.notas[5] = 8;
  aluno1.notas[6] = 5;

  strcpy(aluno1.nome, "Joao");

  aluno1.codigoTurma = 101;
  aluno1.faltas[0] = 0;
  aluno1.faltas[1] = 1;
  aluno1.faltas[2] = 0;
  aluno1.faltas[3] = 1;
  aluno1.faltas[4] = 2;
  aluno1.faltas[5] = 5;
  aluno1.faltas[6] = 3;

  criar_arquivo();
  menu();
  return 0;
}
