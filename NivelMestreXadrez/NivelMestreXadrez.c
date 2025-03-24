#include <stdio.h>
#include <stdlib.h>


void MoverRainha(int casa){

    if (casa <= 8) {

        printf("%dº Casa Para Esquerda\n", casa);
        MoverRainha(casa + 1);

       

    }
}
void MoverBispo(int casa){

    if (casa <= 5) {

        printf("%dº Casa Na Diagonal à Direita\n", casa);
        MoverBispo(casa + 1);

       

    }
}
void MoverTorre(int casa){

    if (casa <= 5) {

        printf("%dº Casa Para Direita\n", casa);
        MoverTorre(casa + 1);

       

    }
}
void MoverCavalo(int casa){

    if (casa <= 2) {

        printf("%dº Casa Para Cima\n", casa);
        MoverCavalo(casa + 1);

    }
}    

    

int main(){

    int opcao;  
    int vezes = 1;
    int cavalo;
    


printf("\n### JOGO DE XADREZ ###\n\n");
    
printf("\n***Menu Inicial***\n");
printf("1. Rainha\n");
printf("2. Bispo\n");
printf("3. Torre\n");
printf("4. Cavalo\n");
printf("5. Sair\n");
printf("Digite uma opção: \n");
scanf("%d", &opcao);

switch (opcao){
    case 1:
        
        printf("Rainha Escolhida\n");
        printf("Rainha se movendo 8 casas para Esquerda....\n");
      
        MoverRainha(vezes);
    break;
}

switch (opcao){
    case 2:

        printf("Bispo Escolhido\n");
        printf("Bispo se movendo 5 casas na Diagonal à Direita....\n");
      
        MoverBispo(vezes);

    break;
}
switch (opcao){
    case 3:
        printf("Torre Escolhida\n");
        printf("Torre se movendo 5 casas para Direita....\n");

        MoverTorre(vezes);
    break;
}
switch (opcao){
    case 4:
        printf("Cavalo Escolhido\n");
        printf("Cavalo se movendo 2 Casas para Cima e uma para Direita....\n");
        
        MoverCavalo(vezes);    
        
        
        for (cavalo = 1; cavalo <= 1; cavalo++){
            printf("%dº Casa Para Direita\n", cavalo);
        }
        
    break;
}
switch (opcao){
    case 5:
        printf("Saindo....\n");
    break;
}
switch (opcao){
    case 6:
    printf("Opção Inválida\n");


    break;
    default:
}
   
    
    
    
    return 0;

}

    