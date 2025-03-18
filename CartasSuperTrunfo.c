#include <stdio.h>

int main () {
    
   char estado1 , estado2 ;
   char cidade1 [20], cidade2 [20];
   char codigo1 [20] , codigo2 [20];
   int populacao1 , populacao2;
   float areaemkm1 , areaemkm2;
   float PIB1 ,  PIB2;
   int pontoturistico1 , pontoturistico2;
   float dencidadepopulacional1 ,  dencidadepopulacional2;
   float pibpercapital1 , pibpercapital2;

   //etrado com os dados carta 1

  printf("### carta1 ### \n"); 
   
   printf("digite letra do estado: \n");
   scanf("%c" , &estado1 );

   printf("digite a cidade: \n");
   scanf("%s" , &cidade1);

   printf("codigo da crata; \n");
   scanf("%s" , &codigo1);

   printf("populacao: \n");
   scanf("%d" , &populacao1);

   printf("area em km: \n");
   scanf("%f" , &areaemkm1);

   printf("PIB: \n");
   scanf("%f" , &PIB1);

   printf("ponto turistico: \n");
   scanf ("%i", &pontoturistico1);

   //calculo da carta 1
   
   dencidadepopulacional1= (float) populacao1 / areaemkm1 ;
   pibpercapital1= (float) PIB1 * (10000000) / populacao1; 

   // dados da carta 2

   printf("### carta2 ### \n"); 

   printf("digite letra do estado: \n");
   scanf(" %c" , &estado2 );

   printf("digite a cidade: \n");
   scanf("%s" , &cidade2);

   printf("codigo da crata; \n");
   scanf("%s" , &codigo2);

   printf("populacao: \n");
   scanf("%d" , &populacao2);

   printf("area em km: \n");
   scanf("%f" , &areaemkm2);

   printf("PIB: \n");
   scanf("%f" , &PIB2);

   printf("ponto turistico: \n");
   scanf ("%i", &pontoturistico2);
   
//cauculos da carta 2

   dencidadepopulacional2= (float) populacao2 / areaemkm2 ;
   pibpercapital2= (float) PIB2 *(10000000) / populacao2; 

   printf("### CARTAS ###\n");

   printf("### carta1 ### \n ");
   printf("estado: %c \n", estado1);
   printf("cidade: %s \n", cidade1);
   printf("codigo: %s \n ", codigo1);
   printf("populacao: %d  \n" , populacao1);
   printf("area em km: %f \n" , areaemkm1);
   printf("PIB: %f \n" , PIB1);
   printf("pontos turisticos: %i \n" , pontoturistico1); 
   printf("A dencidade populacional é: %.2f\n" , dencidadepopulacional1);
   printf("O PIB pre capital é: %.2f\n" , pibpercapital1);

   printf("### carta2 ### \n ");
   printf("estado: %c \n", estado2);
   printf("cidade: %s \n", cidade2);
   printf("codigo: %s \n ", codigo2);
   printf("populacao: %d  \n" , populacao2);//ok
   printf("area em km: %f \n" , areaemkm2);//ok
   printf("PIB: %f \n" , PIB2);//ok
   printf("pontos turisticos: %i \n" , pontoturistico2); 
   printf("A dencidade populacional é: %.2f\n" , dencidadepopulacional2);//ok
   printf("O PIB pre capital é: %.2f\n" , pibpercapital2);

   int resultadopopulacao, resultadoarea , resultadoPIB , resultadopontosturisticos, resultadodencidade , resultadopercato;

   resultadoPIB = PIB1 > PIB2;
   resultadopopulacao = populacao1 > populacao2;
   resultadoarea =  areaemkm1 > areaemkm2;
   resultadodencidade =  dencidadepopulacional1 < dencidadepopulacional2;
   resultadopercato = pibpercapital1 > pibpercapital2;
   resultadopontosturisticos = pontoturistico1 > pontoturistico2;

// resultado
   printf("### comparando as cartas ###");
   printf("carta 1 tem o PIB maior que carta 2: %d\n", resultadoPIB);
   printf("carta 1 tem a populacao maior  que carta 2: %d\n", resultadopopulacao);
   printf("carta 1 tem a area em km maior  que carta 2: %d\n", resultadoarea );
   printf("carta 1 tem a dencidade populacional  menor  que carta 2: %d\n", resultadodencidade );
   printf("carta 1 tem o PIB per-capital maior que carta 2: %d\n", resultadopercato);
   printf("carta 1 tem os pontos turistocos maior que carta 2: %d\n", resultadopontosturisticos );

  return 0;
}
