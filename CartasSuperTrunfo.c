#include <stdio.h>

int main() {
    
     //Desafio SuperTrunfo. Aluno: João Pedro Araújo. Professor: Sérgio Cardoso.

char nomedoestado1; // Uma letra de A a H.
int codigodoestado1; // Número para criar o código da carta
char codigodacarta1[10]; //Nome e Número escolhidos
char nomedacidade1[50]; // Diferente do nome do estado, aqui nós temos no scanf uma String invés de um Char.
int populacao1;
float areaemkm21;
float pib1;
int pontosturisticos1;

//Agora iremos coletar as informações do usuário para montar a carta

printf("\n Agora vamos cadastrar a carta número 01.\n");

printf ("Escolha uma letra de A a H para representar o Estado da carta 01: \n");
scanf ("%c", &nomedoestado1);

printf ("Escolha um número de 01 a 04 para representar o código do seu estado da carta 01: \n");
scanf ("%d", &codigodoestado1);
sprintf(codigodacarta1, "%c%d", nomedoestado1, codigodoestado1);

printf ("Agora digite o nome da Cidade do Estado que você escolheu: \n");
scanf ("%s",&nomedacidade1);

printf ("Digite a população da Cidade que você escolheu: \n");
scanf ("%d", &populacao1);

printf("Digite a área em KM² do Estado que você escolheu: \n");
scanf ("%f", &areaemkm21);

printf ("Digite o PIB da Cidade que você escolheu: \n");
scanf ("%f", &pib1);

printf ("Digite quantos Pontos Turísticos a Cidade que você escolheu possui: \n");
scanf ("%d", &pontosturisticos1);

// Agora vamos cadastrar a carta 02

char nomedoestado2; // Uma letra de A a H.
int codigodoestado2; // Número para criar o código da carta
char codigodacarta2[10]; //Letra e Número escolhidos
char nomedacidade2[50]; // Diferente do nome do estado, aqui nós temos no scanf uma String invés de um Char.
int populacao2;
float areaemkm22;
float pib2;
int pontosturisticos2;

//Agora iremos coletar as informações do usuário para montar a carta 02

printf ("\n Agora vamos cadastrar a carta número 02.\n");

printf ("Escolha uma letra de A a H para representar o Estado da carta 02: \n");
// Temos um espaço em "%c" pois ele considerou o Enter deixado em buffer na finalização da carta 01.
scanf (" %c", &nomedoestado2);

printf ("Escolha um número de 01 a 04 para representar o código do seu Estado da carta 02: \n");
scanf ("%d", &codigodoestado2);
sprintf(codigodacarta2, "%c%d", nomedoestado2, codigodoestado2);

printf ("Agora digite o nome da Cidade do Estado que você escolheu: \n");
scanf ("%s", &nomedacidade2);

printf ("Digite a população da Cidade que você escolheu: \n");
scanf ("%d", &populacao2);

printf("Digite a área em KM² do Estado que você escolheu: \n");
scanf ("%f", &areaemkm22);

printf ("Digite o PIB da Cidade que você escolheu: \n");
scanf ("%f", &pib2);

printf ("Digite quantos Pontos Turísticos a Cidade que você escolheu possui: \n");
scanf ("%d", &pontosturisticos2);


//Agora veremos as informações das cartas impressas na tela.


printf("\n----- Carta 01 -----\n");
printf("Código da carta: %s\n", codigodacarta1);
printf("Estado: %c\n", nomedoestado1);
printf("Cidade: %s\n", nomedacidade1);
printf("População: %d\n", populacao1);
printf("Área em KM²: %f\n", areaemkm21);
printf("PIB: %f\n", pib1);
printf("Pontos Turísticos: %d\n", pontosturisticos1);

printf("\n----- Carta 02 -----\n");
printf("Código da carta: %s\n", codigodacarta2);
printf("Estado: %c\n", nomedoestado2);
printf("Cidade: %s\n", nomedacidade2);
printf("População: %d\n", populacao2);
printf("Área em KM²: %f\n", areaemkm22);
printf("PIB: %f\n", pib2);
printf("Pontos Turísticos: %d\n", pontosturisticos2);

//Finalizado com sucesso :)



    return 0;
}
