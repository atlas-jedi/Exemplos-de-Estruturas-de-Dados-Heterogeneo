#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct departamento
{
  int cod;
  char descricao[30];
} Departamento;

typedef struct cargo
{
  int cod;
  char descricao[30];
} Cargo;

typedef struct funcionario
{
  int cod;
  char nome[30];
  Departamento depto;
  Cargo cargo;
} Funcionario;

int main(void)
{
  setlocale(LC_ALL, ".UTF8");

  Funcionario f1;
  f1.cod = 1;
  strcpy(f1.nome, "Joao");
  f1.depto.cod = 1;
  strcpy(f1.depto.descricao, "TI");
  f1.cargo.cod = 1;
  strcpy(f1.cargo.descricao, "Programador");
  printf("Dados do funcionário:\n");
  printf("Código: %d\n", f1.cod);
  printf("Nome: %s\n", f1.nome);
  printf("Departamento: %d - %s\n", f1.depto.cod, f1.depto.descricao);
  printf("Cargo: %d - %s\n", f1.cargo.cod, f1.cargo.descricao);
  return 0;
}
