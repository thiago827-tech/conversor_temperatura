#include <stdio.h>
#include <stdlib.h>
int main() {
  int qtd;
  char nomes[10][100];
  float notas[10];
  printf("Quantos alunos deseja cadastrar? (max 10)");
  scanf("%d", &qtd);
  if(qtd< 1 || qtd > 10){
    printf("Quantidade invalida, deve ser entre 1 e  10\n");
    return 1;
  }
  for(int i = 0; i < qtd; i++){
    printf("Digite o nome do aluno %d: ", i + 1);
    fgets(nomes[i], sizeof(nomes[i]), stdin);
    nomes[i][strcspn(nomes[i], "\n")]= '\0';
    printf("Digite a nota  do aluno %d: ", i+1);
    scanf("%f", &notas[i]);
  }
  printf("\nAlunos Cadastrados: \n");
  for(int i = 0 < qtd; i++){
    printf("Aluno %d: %s - Nota: %.2f\n", i + 1, nomes[i], notas[i]);
  }
  return 0;
}
