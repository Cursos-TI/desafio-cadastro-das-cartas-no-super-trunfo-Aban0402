#include <stdio.h>
    int main(){

    char Estado[20];
    char Nome[20];
    char Cidade[20];
    float Area;
    float Populacao;
    float PIB;

    printf("Digite seu Nome:\n");
        scanf("%s", &Nome);

    printf("Digite sua Cidade:\n");
        scanf("%s", &Cidade);

    printf("Digite a Área da Cidade:\n");
        scanf("%f", &Area);
    
    printf("Digite a População da Cidade:\n");
        scanf("%f", &Populacao);

    printf("Digite o PIB da Cidade:\n");
        scanf("%f", &PIB);

    float P_A = Populacao / Area;
    float PIB_P = PIB / Populacao;

    printf("Sua resposta %s, sobre a cidade de %s. Está logo abaixo.\n", Nome, Cidade);
    printf("A Densidade Populacional é: %f\n", P_A);
    printf("O PIB Per Capita é: %f\n", PIB_P); 



    }
