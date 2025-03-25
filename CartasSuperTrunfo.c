#include <stdio.h>

int main() {
    char estado[50];
    char codigo[20];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turismo;
    float densidade;
    float pibpercapita;

/// carta 1

printf("digite o estado: \n");
scanf("%s", estado);
printf("Estado: %s\n", estado);


printf("Digite o codigo da carta: \n");
scanf("%s", codigo);
printf("codigo da carta: %s\n", codigo);
    
printf("digite a cidade: \n");
scanf("%s", cidade);
printf("cidade: %s\n", cidade);

printf("digite a população: \n");
scanf("%d", &populacao);
printf("população: %d\n", populacao);

printf("digite a area: \n");
scanf("%f", &area);
printf("area: %.2f\n", area);

printf("Digite o pib: \n");
scanf("%f", &pib);
printf("Pib: %f\n", pib);

printf("Digite a quatidade de pontos turisticos: \n");
scanf("%d", &turismo);
printf("Quantidade de pontos turísticos: %d\n", turismo);

// calculo densidade populacional
densidade = (float)(populacao / area);
// calculo pib percapita
pibpercapita = (float)( pib / populacao);

printf("Densidade populacional: %.2f\n", densidade);
printf("Pib percapita: %.2f\n", pibpercapita);

/// carta 2 

printf("Digite o estado: \n");
scanf("%s", estado);
printf("Estado: %s\n", estado);


printf("Digite o codigo da carta: \n");
scanf("%s", codigo);
printf("codigo da carta: %s\n", codigo);
    
printf("digite a cidade: \n");
scanf("%s", cidade);
printf("cidade: %s\n", cidade);

printf("digite a população: \n");
scanf("%d", &populacao);
printf("população: %d\n", populacao);

printf("digite a area: \n");
scanf("%f", &area);
printf("area: %.2f\n", area);

printf("Digite o pib: \n");
scanf("%f", &pib);
printf("Pib: %f\n", pib);

printf("Digite a quatidade de pontos turisticos: \n");
scanf("%d", &turismo);
printf("Quantidade de pontos turísticos: %d\n", turismo);

// calculo densidade populacional
densidade = (float)(populacao / area);
// calculo pib percapita
pibpercapita = (float)( pib / populacao);

printf("Densidade populacional: %.2f\n", densidade);
printf("Pib percapita: %.2f\n", pibpercapita);

return 0;
    
}
