// TAD - Aluno
typedef struct {
  int matricula;
  float notas[7];
  char nome[50];
  int codigoTurma;
  int faltas[7];
} Aluno;

// TAD - Turma
typedef struct {
  Aluno *aluno;
  int quantidadeAluno;
  int id;
} Turma;


void menu();

// INSERCOES
// inserir aluno em qual posicao?
void inserirAlunoInicio(Aluno *aluno);
void inserirAlunoPosicaoEspecifica();
void inserirAlunoFim();

// cadastro
void cadastrarAluno();
