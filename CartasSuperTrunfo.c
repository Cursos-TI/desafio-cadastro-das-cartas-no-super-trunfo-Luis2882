#include <stdio.h>

int main() {
   
    int populacao, turisticos;
    float km, pib; 
    char carta[50];
    char estado;
    char cidade[50];

    printf("Bem vindo, ao Desafio das Cartas! \n");

    printf("Coloque abaixo, o nome do estado da sua carta: \n" );
    scanf("%s", &estado);
    
    printf("Agora, coloque o nome de uma cidade do seu estado: \n");
    scanf("%s", &cidade);

    printf("Hmm, otimo! Agora coloque a população da sua cidade: \n");
    scanf("%d", &populacao);    
    


    return 0;
}
