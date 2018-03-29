#include <stdio.h>

#define NUMEROLIVROS 100
#define MAXTITULO 40
#define MAXNOME 20

typedef struct{
  int dia;
  int mes;
  int ano;
} Data;

typedef struct{
  char titulo[MAXTITULO+1];
  char autor[MAXNOME+1];
  long int isbn;
  int anoPublicacao;
  int numeroDaCopia;
  Data dataEmprestimo;
  Data dataRetorno;

} Livro;

int main{

}
