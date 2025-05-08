#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char nome[50];
printf("\nDigite seu nome abaixo por favor: \n");
fgets(nome, sizeof(nome), stdin);
nome[strcspn(nome, "\n")]= '\0';
printf("\nOla, %s, Muito Prazer!\n", nome);
system("pause");
