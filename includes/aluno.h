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
  Aluno *alunos;
  int quantidadeAlunos;
  int capacidade;
} Turma;

// alocacao dinamica de memoria para 10 registros
Turma *alocarMemoriaAlunos();
int realocarMemoriaAlunos(Turma *turma, int novaCapacidade);
Turma *liberarMemoriaAlunos(Turma *turma);


// mostrar menu de opcoes
void menu();

// inserir aluno em qual posicao?
void inserirInicio(Aluno aluno, Turma *turma);
void inserirPosicaoEspecifica(Aluno aluno, int posicao, Turma *turma);
void inserirFim(Aluno aluno, Turma *turma);

// listar todas as informacoes do aluno por turma
void listar(Turma *turma);

// remover em posicao especifica
void removerPosicaoEspecifica(int posicao, Turma *turma);

// remover por id especifico
void removerValor(int id, Turma *turma);

// procurar por id
void procurar(int id, Turma *turma);

// retornar quantidade de alunos na turma
void tamanho(Turma *turma);

// opcao para sair
void sair();

// cadastro
void cadastrarAluno();
