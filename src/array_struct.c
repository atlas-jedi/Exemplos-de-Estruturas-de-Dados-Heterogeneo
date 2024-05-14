#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* Um vetor de estrutura também pode ser chamado de array de structs */

typedef struct
{
  int dia;
  int mes;
  int ano;
} Data;

typedef struct
{
  int codigo;
  char nome[200];
  Data datNasc;
} Aluno;

Aluno alunos[5];
int i = 0;

int main(void)
{
  setlocale(LC_ALL, ".UTF8");

  // Inicializando os alunos
  for (i = 0; i < 5; i++)
  {
    alunos[i].codigo = 0;
    strcpy(alunos[i].nome, "NULL");
    alunos[i].datNasc.dia = 0;
    alunos[i].datNasc.mes = 0;
    alunos[i].datNasc.ano = 0;
  }

  // Lendo os alunos
  for (i = 0; i < 5; i++)
  {
    printf("\n=============================================\n");
    printf("Digite o código do aluno: ");
    scanf("%d%*c", &alunos[i].codigo);
    printf("Digite o nome do aluno: ");
    scanf("%s%*c", alunos[i].nome);
    printf("Digite o dia de nascimento do aluno: ");
    scanf("%d%*c", &alunos[i].datNasc.dia);
    printf("Digite o mês de nascimento do aluno: ");
    scanf("%d%*c", &alunos[i].datNasc.mes);
    printf("Digite o ano de nascimento do aluno: ");
    scanf("%d%*c", &alunos[i].datNasc.ano);
    printf("\n=============================================\n\n");
  }

  // Mostrando os alunos
  for (i = 0; i < 5; i++)
  {
    printf("\n=============================================");
    printf("\nCódigo do aluno é: %d", alunos[i].codigo);
    printf("\nO nome do aluno é: %s", alunos[i].nome);
    printf("\nData de nascimento do aluno é: %d/%d/%d", alunos[i].datNasc.dia, alunos[i].datNasc.mes, alunos[i].datNasc.ano);
    printf("\n=============================================\n");
  }
}