#include <stdio.h>
int main() {
//Declara��o das vari�veis da primeira carta

char estado1[3], codigo1[4], cidade1[50];
int populacao1, pontos1;
float area1, pib1, densidade1, pib_per_capita1;

//Entrada de dados da primeira carta
printf ("Cadsatro da primeira carta\n");

printf("Digite a sigla do estado: \n");
scanf("%s", estado1);
printf("Digite o c�digo da carta: \n");
scanf("%s", codigo1);
printf("Digite o nome da cidade: \n");
scanf("%s", cidade1);
printf("Digite o n�mero da popula��o: \n");
scanf("%d", &populacao1);
printf("Digite o n�mero de pontos tur�sticos: \n");
scanf("%d", &pontos1);
printf("Digite a area da cidade (em km�): \n");
scanf("%f", &area1);
printf("Digite o PIB da cidade: \n");
scanf("%f", &pib1);

//calculando a densidade populacional e PIB per capita
densidade1 = populacao1 / area1;
pib_per_capita1 = pib1 / populacao1;

//Exibindo dados cadastrados
printf("-----Carta1-----\n");
printf("Estado: %s\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("Popula��o: %d\n", populacao1);
printf("Pontos Tur�sticos: %d\n", pontos1);
printf("Area: %.2f km�\n", area1);
printf("Pib: %.2f\n", pib1);
printf("Densidade populacional: %.2f hab/km^�\n", densidade1);
printf("Pib per capita: %.2f\n", pib_per_capita1);

//Declara��o das vari�veis para a segunda carta
char estado2[3], codigo2[4], cidade2[50];
int populacao2, pontos2;
float area2, pib2, densidade2, pib_per_capita2;

//Entrada de dados da segunda carta
printf("\n Cadastro da segunda carta\n");

printf("Digite a sigla do estado: \n");
scanf("%s", estado2);
printf("Digite o c�digo da carta: \n");
scanf("%s", codigo2);
printf("Digite o nome da cidade: \n");
scanf("%s", cidade2);
printf("Digite o n�mero da popula��o: \n");
scanf("%d", &populacao2);
printf("Digite o n�mero de pontos tur�sticos: \n");
scanf("%d", &pontos2);
printf("Digite o n�mero da �rea dem km�: \n");
scanf("%f", &area2);
printf("Digite o PIB da cidade: \n");
scanf("%f", &pib2);

//Calculando a densidade populacional e o PIB per capita
densidade2 = populacao2 / area2;
pib_per_capita2 = pib2 / populacao2;

//Exibindo dados cadastrados
printf("-----Carta2-----");
printf("Estado: %s\n", estado2);
printf("C�digo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Popula��o: %d\n", populacao2);
printf("Pontos Tur�sticos: %d\n", pontos2);
printf("Area: %.2f\n", area2);
printf("PIB: %.2f \n",area2);
printf("Densidade populacional: %.2f hab/km�\n", densidade2);
printf("PIB per capita: %f.2\n", pib_per_capita2);

//Comparando as cartas (Escolhendo popula��o como crit�rio)
printf("\n Compara��o de cartas (Atributo: Popula��o) \n");
printf("Carta1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
printf("Carta2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

if (populacao1 > populacao2){
    printf("Resultado: carta 1 (%s) VENCEU!\n", cidade1);
} else if (populacao2 > populacao1) {
    printf("Resultado: carta 2 (%s) VENCEU!\n", cidade2);
} else {
    printf("Resultado: Empate!\n");
}

return 0;
}