#include <stdio.h>

int main (){

//dados das cartas.
char (estado) [20];
char (codigo) [20];
char (nomedacidade) [100];
int populacao;
float areakm;
float pib;
int pontosturisticos;

//dados das cartas numero 2.
char (estado2) [20];
char (codigo2) [20];
char (nomedacidade2) [100] ;
int populacao2;
float areakm2;
float pib2;
int pontosturisticos2;

//inserir dados das cartas numero 1.
printf("*****Insira os dados da carta numero 1:***** \n");

printf("Entre com o estado: \n");
scanf("%s", &estado);

printf("Entre com o nome da cidade: \n");
scanf("%s", &nomedacidade);

printf("Entre com o codigo: \n");
scanf("%s", &codigo);

printf("Entre com a População: \n");
scanf("%d", &populacao);

printf("Entre com a Área: \n");
scanf("%f", &areakm);

printf("Entre com a PIB: \n");
scanf("%f", &pib);

printf("Entre com os Numeros dos Pontos Turisticos: \n");
scanf("%f", &pontosturisticos);

//inserir dados das cartas numero 2.
printf("\n\n*****Insira os dados da carta numero 2:***** \n");

printf("Entre com o estado: \n");
scanf("%s", &estado2);

printf("Entre com o nome da cidade: \n");
scanf("%s", &nomedacidade2);

printf("Entre com o codigo: \n");
scanf("%s", &codigo);

printf("Entre com a População: \n");
scanf("%d", &populacao2);

printf("Entre com a Área: \n");
scanf("%f", &areakm2);

printf("Entre com a PIB: \n");
scanf("%f", &pib2);

printf("Entre com os Numeros dos Pontos Turisticos: \n");
scanf("%d", &pontosturisticos2);

//Imprimindo os dados das cartas
// carta 1.
printf("\n\ncarta 1:\n");
printf("Estado: %s\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da cidade: %s\n", nomedacidade);
printf("Área: %fkm²\n", areakm);
printf("PIB: %f\n", pib);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos);

// carta 2.
printf("\ncarta 2:\n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da cidade: %s\n", nomedacidade2);
printf("Área: %fkm²\n", areakm2);
printf("PIB: %f\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);



return 0;
}
