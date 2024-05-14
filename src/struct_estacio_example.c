#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* A estrutura interna sem nome pode ser acessada diretamente
   como se fosse um membro da estrutura externa. */
typedef struct
{
  int codigo;
  char nome[200];
  struct
  {
    int dia;
    int mes;
    int ano;
  };
} Aluno;

Aluno aluno;

int main(void)
{
  setlocale(LC_ALL, ".UTF8");

  aluno.codigo = 0;
  strcpy(aluno.nome, "NULL");
  aluno.dia = 0;
  aluno.mes = 0;
  aluno.ano = 0;

  printf("\nCódigo do aluno é: %d\n", aluno.codigo);
  printf("\nO nome do aluno é: %s\n", aluno.nome);
  printf("\nData de nascimento do aluno é: %d/%d/%d\n", aluno.dia, aluno.mes, aluno.ano);
  printf("\n");
  printf("Digite o código do aluno: ");
  scanf("%d%*c", &aluno.codigo);
  printf("Digite o nome do aluno: ");
  scanf("%s%*c", aluno.nome);
  printf("Digite o dia de nascimento do aluno: ");
  scanf("%d%*c", &aluno.dia);
  printf("Digite o mês de nascimento do aluno: ");
  scanf("%d%*c", &aluno.mes);
  printf("Digite o ano de nascimento do aluno: ");
  scanf("%d%*c", &aluno.ano);
  printf("\n Código do aluno é: %d\n", aluno.codigo);
  printf("\n O nome do aluno é: %s\n", aluno.nome);
  printf("\n Data de nascimento do aluno é: %d/%d/%d\n", aluno.dia, aluno.mes, aluno.ano);
  printf("\n");
  return 0;
}