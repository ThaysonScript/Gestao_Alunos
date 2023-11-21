#include <stdio.h>
#include "../includes/menu.h"
#include "../includes/aluno.h"

void menu() {
  puts("----------------- GESTAO DE ALUNOS ----------------");
  puts("[1] - Inserir Aluno no Inicio");
  puts("[2] - Cadastrar Aluno");
  puts("[3] - Cadastrar Aluno");
  puts("[4] - Cadastrar Aluno");
  puts("[5] - Cadastrar Aluno");
  puts("[6] - Cadastrar Aluno");
  puts("[7] - Cadastrar Aluno");
  puts("[8] - Deseja Sair?");

  int escolha;
  scanf("\n%d", &escolha);
  
  switch(escolha) {
    case 1:
      inserirInicio(Aluno aluno, Turma *turma);
      break;

    case 2:
      //////////////
      break;

    case 8:
      puts("Saindo!.......\n");
      break;

    default:
      puts("Digite escolha valida!\n");
      menu(); 
  }
}
