#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  int i, qtd;
  char nomes[10][100];
  float notas[10];
  printf("Quantos alunos deseja cadastrar? (max 10)\n");
  scanf("%d", &qtd);
  getchar();
  if(qtd< 1 || qtd > 10){
    printf("Quantidade invalida, deve ser entre 1 e 10\n");
    return 1;
  }
  for (i = 0; i < qtd; i++){
    printf("\nDigite o nome do aluno %d: ", i + 1);
    fgets(nomes[i], sizeof(nomes[i]), stdin);
    nomes[i][strcspn(nomes[i], "\n")]= '\0';
    printf("\nDigite a nota  do aluno %d: ", i+1);
    scanf("%f", &notas[i]);
    getchar();
  }
  printf("\nAlunos Cadastrados: \n");
  for(i = 0; i < qtd; i++){
    printf("Aluno %d: %s - Nota: %.2f\n", i + 1, nomes[i], notas[i]);
  }
  return 0;
}
