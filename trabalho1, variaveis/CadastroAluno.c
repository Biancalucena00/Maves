#include <stdio.h>

main() {

  char nome[50];
  char idade[4];
  char matricula[10];
  char endereco[30];
  char curso[30];
  char periodo[15];
  char disciplina[35];

  printf("digite seu nome completo: ");
  scanf("%s", &nome);

  printf("digite sua idade: \n");
  scanf("%s", &idade);

  printf("digite sua matricula: \n");
  scanf("%s", &matricula);

  printf("digite seu enredeço: \n");
  scanf("%s", &endereco);

  printf("digite seu curso: \n");
  scanf("%s", &curso);

  printf("digite seu periodo: \n");
  scanf("%s", &periodo);

  printf("digite sua dsiciplina: \n");
  scanf("%s", &disciplina);

  printf(" \n NOME:  %s\n ", nome);
  printf("idade:  %s\n ", idade);
  printf("matricula:  %s\n ", matricula);
  printf("endereço:  %s\n ", endereco);
  printf("curso:  %s\n ", curso);
  printf("periodo:  %s\n ", periodo);
  printf("disciplina:  %s\n ", disciplina);

  return 0;
}