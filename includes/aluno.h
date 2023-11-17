typedef struct {
  int matricula;
  float notas[7];
  char nome[50];
  int codigo_turma;
  int faltas[7];
} Aluno;

typedef struct {
  Aluno aluno*;
} Turma;

int inserirAluno();
