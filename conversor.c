#include <stdio.h>
#include <stdlib.h>
void main(){
float c, f;
printf("\nBem vindo ao programa de conversao de temperatura!\n");
printf("\nInforme o valor da temperatura em celsius que deseja converter para fahrenheit: \n");
scanf("%f", &c);
f=(c*1.8)+32;
printf("\nO valor da temperatura e: %.1f Fahrenheit\n", f);
printf("\nObrigado por testar o programa :)\n");
}
