#include <stdio.h>
    int main (){
   
        int Código;
        char Nome[20];
        float População;
        float Área;
        float PIB;
        int Pontos;

        printf ("Digite o código da cidade\n");
            scanf (" %d", &Código);

        printf ("Digite o nome da cidade\n");
            scanf (" %s", &Nome);

        printf ("Digite a população da cidade\n");
            scanf (" %f", &População);
        
        printf ("Digite a área da cidade\n");
            scanf (" %f", &Área);

        printf ("Digite o PIB da Cidade\n");
            scanf (" %f", &PIB);

        printf ("Digite os Pontos Turisticos da Cidade\n");
            scanf (" %d", &Pontos);

    printf ("Nome da Código da Cidade: %d\n", Código);
    printf ("Nome da Cidade: %s\n", Nome);
    printf ("População: %f\n", População);
    printf ("Área: %f\n", Área);
    printf ("PIB: %f\n", PIB);
    printf ("Pontos Turisticos: %d\n", Pontos);

    return 0
    }
