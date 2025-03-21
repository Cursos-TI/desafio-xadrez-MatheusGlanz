#include <stdio.h>
#include <stdlib.h>

int main(){



    int opcao;
    int rainha, bispo, torre, cavalo;
    int movimentocavalo = 1;

    //Inicio do jogo
    
    printf("\n### JOGO DE XADREZ ###\n\n");
    
    printf("\n***Menu Inicial***\n");
    printf("1. Rainha\n");
    printf("2. Bispo\n");
    printf("3. Torre\n");
    printf("4. Cavalo\n");
    printf("5. Sair\n");
    printf("Digite uma opção: \n");
    scanf("%d", &opcao);
    
    //Estrutura de decisï¿½o para escolha da rainha
    switch (opcao) {
        case 1:
            rainha = 1;
    
            for (rainha = 1; rainha < 9; rainha++) {
                printf("Rainha Escolhida\n");
                printf("Rainha se moveu %d casas para Esquerda\n", rainha);
            }
    
        }
       //Estrutura de decisï¿½o para escolha do bispo 
       switch (opcao){
        case 2:
            bispo = 1;
            do {
                printf("Bispo Escolhido\n");
                printf("Bispo esta subindo %d casas na diagonal Direita\n", bispo);
                bispo++;
            } while (bispo < 6);
        }
       //Estrutura de decisï¿½o para escolha da torre 
       switch (opcao){
        case 3:
            torre = 1;
            while (torre < 6) {
                printf("Torre Escolhida\n");
                printf("Torre se moveu %d casas para Direita\n", torre);
                torre++;
            }
        }
       //Estrutura de decisão   para escolha do cavalo
       switch (opcao){
           case 4:
               cavalo = 1;
               while (movimentocavalo--) 
               {
                for (cavalo = 1; cavalo < 2; cavalo++) 
                {
                   printf("Cavalo desceu 2 casas\n");
               }
               printf("E virou 1 casa para Direita\n");
            }
       }
          
       //Estrutura de decisisão para sair 
       switch (opcao){
        case 5:
              printf("Opção Sair escolhida\n");
              printf("Saindo...\n");
     
       } 
      //Estrutura de decisï¿½o para opï¿½ï¿½o invï¿½lida 
      switch (opcao){
      case 6:
        printf("Opção Inválida\n");
    
      break;
      default:
       
      
    
      } 
    
    
     //Fim do jogo
    
    
    
    
        return 0;
    }

