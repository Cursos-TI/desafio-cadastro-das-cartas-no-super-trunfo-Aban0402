#include <stdio.h>
    int main(){

        char Nome[20];
        unsigned long int População;
        unsigned long int PIB;
        unsigned long int Área;
        long int Locais;



        printf("Iremos abordar o jogo da seguinte forma. 1 para a cidade 1 e 0 para a cidade 2\n");

        printf("Digite o nome da Cidade:\n");
            scanf("%s", Nome);
        
        printf("Digite a população da Cidade:\n");
            scanf("%d", População);
        
        printf("Digite o PIB da cidade:\n");
            scanf("%d", PIB);

        printf("Digite a Área da Cidade:\n");
            scanf("%d", Área);

        printf("Digite os Pontos Turisticos da Cidade:\n");
            scanf("%ld", Locais);

        unsigned long int Densidade;
        unsigned long int PIBP;
        Densidade = (float)População / Área;
        PIBP = (float)PIB / População;

        printf("A Densidade da sua cidade é: %d\n", Densidade);
        printf("O PIB Per Capita da sua cidade é: %d\n", PIBP);

        printf("Cidade Adversária:\n");

        char TNome2[20];
        unsigned long int TPopulação2;
        unsigned long int TPIB2;
        unsigned long int TÁrea2;
        long int TLocais2;

        printf("Digite o nome da Cidade:\n");
            scanf("%s",TNome2 );
        
         printf("Digite a população da Cidade:\n");
            scanf("%d", TPopulação2);
        
        printf("Digite o PIB da cidade:\n");
            scanf("%d", TPIB2);

        printf("Digite a Área da Cidade:\n");
            scanf("%d", TÁrea2);

        printf("Digite os Pontos Turisticos da Cidade:\n");
            scanf("%ld", TLocais2);

        double Densidade2 = (float)TPopulação2 / TÁrea2;
        double PIBP2 = (float)TPIB2 / TPopulação2;

        printf("A Densidade da sua cidade é: %d\n", Densidade2);
        printf("O PIB Per Capita da sua cidade é: %d\n", PIBP2);

        unsigned long int DP1 = (float)Densidade > Densidade2;
        unsigned long int PPC1 = (float)PIBP > PIBP2;

        printf("A Cidade vencedora em densidade é: %d\n", DP1);
        printf("A Cidade vencedora em PIB Per Capita é:: %d\n", PIBP2);





    }
