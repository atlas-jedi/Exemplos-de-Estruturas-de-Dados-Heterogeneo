# Exemplos de Estrutura de Dados Heterogêneo em C

Este repositório contém exemplos de implementações de estruturas de dados heterogêneas em linguagem C. Esses exemplos foram desenvolvidos como parte dos estudos do curso de Ciência da Computação da minha faculdade.

## Exemplos já implementados

- Alocação de memória
- Ponteiro (usado para construção de algumas estruturas de dados)
- Registros (structs em C)

## Como Utilizar

Dentro da pasta src contém vários arquivos no formato ".c" (código-fonte em linguagem C), cada um representando um exemplo de implementação de uma estrutura de dados específica ou de um conceito de C. Para executar, é necessário compilar. O arquivo Makefile pode facilitar a compilação caso você tenha o compilador "cl", disponibilizado pela ferramenta Developer Powershell for VS e a ferramenta "make" que pode ser instalada com Chocolatey.

### Instalação do make

```bash
choco install make
```

### Exemplo de uso do Makefile

De maneira padrão, este comando deve ser executado dentro do Developer Powershell for VS, para que o script tenha acesso ao compilador "cl". Caso contrário, edite o makefile para o seu caso de uso.

```bash
make run SRC=./src/array_struct.c
```

Para limpar qualquer resíduo de compilação, você pode utilizar o seguinte comando:

```bash
make clear
```