#include <stdio.h>
#include <stdlib.h>

int main() {

int opcao;
int rainha, bispo, torre;

//Inicio do jogo

printf("\n### JOGO DE XADREZ ###\n\n");

printf("\n***Menu Inicial***\n");
printf("1. Rainha\n");
printf("2. Bispo\n");
printf("3. Torre\n");
printf("4. Sair\n");
printf("Digite uma opção: \n");
scanf("%d", &opcao);

//Estrutura de decisão para escolha da rainha
switch (opcao) {
    case 1:
        rainha = 1;

        for (rainha = 1; rainha < 9; rainha++) {
            printf("Rainha Escolhida\n");
            printf("Rainha se moveu %d vezes para a direita\n", rainha);
        }

    }
   //Estrutura de decisão para escolha do bispo 
   switch (opcao){
    case 2:
        bispo = 1;
        do {
            printf("Bispo Escolhido\n");
            printf("Bispo está subindo %d vezes para diagonal Direita\n", bispo);
            bispo++;
        } while (bispo < 6);
    }
   //Estrutura de decisão para escolha da torre 
   switch (opcao){
    case 3:
        torre = 1;
        while (torre < 6) {
            printf("Torre Escolhida\n");
            printf("Torre se moveu %d vezes para Direita\n", torre);
            torre++;
        }
    }
   //Estrutura de decisão para sair 
   switch (opcao){
    case 4:
          printf("Opção Sair escolhida\n");
          printf("Saindo...\n");
 
   } 
  //Estrutura de decisão para opção inválida 
  switch (opcao){
  case 5:
    printf("Opção Invalída\n");

  break;
  default:
   
  

  } 


 //Fim do jogo




    return 0;
}