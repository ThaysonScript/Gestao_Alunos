#include <stdio.h>
#include <stdlib.h>
#include "../includes/manipularArquivo.h"

void criarArquivo() {
  FILE *fptr;

  // criar novo arquivo
  fptr = fopen("filename.txt", "w");

  // fechar arquivo
  fclose(fptr);
}

void lerArquivo() {
  
}

void atualizarArquivo() {
  
}

void deletarArquivo() {
  
}
