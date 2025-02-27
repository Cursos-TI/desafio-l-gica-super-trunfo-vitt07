#include <stdio.h>

int main (){

//dados da carta 1.
int populacao;
float area;
float pib;
int pontosturisticos;
char nome [100];
char estado [100];
char codigo [20];

//dados da carta 2.
int populacao2;
float area2;
float pib2;
int pontosturisticos2;
char nome2 [100];
char estado2 [100];
char codigo2 [20];

//inserir dados das cartas numero 1.
printf("*****Carta numero 1:***** \n");

printf("Entre com o Estado: \n");
scanf("%s", &estado);

printf("Entre com o nome da cidade: \n");
scanf("%s", &nome);

printf("Entre com a Código: \n");
scanf("%s", &codigo);

printf("Entre com a População: \n");
scanf("%d", &populacao);

printf("Entre com a Área: \n");
scanf("%f", &area);

printf("Entre com a PIB: \n");
scanf("%f", &pib);

printf("Entre com os Pontos Turisticos:\n");
scanf("%d", &pontosturisticos);


//inserir dados das cartas numero 2.
printf("*****Carta numero 2:***** \n");

printf("Entre com o Estado: \n");
scanf("%s", &estado2);

printf("Entre com o nome da cidade: \n");
scanf("%s", &nome2);

printf("Entre com a Código: \n");
scanf("%s", &codigo2);

printf("Entre com a População: \n");
scanf("%d", &populacao2);

printf("Entre com a Área: \n");
scanf("%f", &area2);

printf("Entre com a PIB: \n");
scanf("%f", &pib2);

printf("Entre com os Pontos Turisticos:\n");
scanf("%d", &pontosturisticos2);


//calculos da Densidade populacional e PIB per Capital carta 1.
double DensidadePopulacional = (double) populacao / area;
double DensidadePopulacional2 = (double) populacao2 / area2;

//calculos da Densidade populacional e PIB per Capitalcarta 2.
double pibpercapital = (double) pib / populacao;
double pibpercapital2 = (double) pib2 / populacao2;

//Comparando um atributo escolhido: População.
printf("Comparação por População!\n\n");
printf("Carta 1: %s (%s): %d\n", nome, estado, populacao);
printf("Carta 2: %s (%s): %d\n", nome2, estado2, populacao2);

if (populacao >= populacao2)
{
   printf("\n**Resultado: Carta 1 (%s) Venceu!**\n", nome);
}else{
    printf("\n**Resultado: Carta 2 (%s) Venceu!**\n", nome2);
}


return 0;
}
