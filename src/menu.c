#include <stdio.h>

void menu() {
  puts("----------------- GESTAO DE ALUNOS ----------------");
  puts("[1] - Cadastrar Aluno");
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
      /////
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
