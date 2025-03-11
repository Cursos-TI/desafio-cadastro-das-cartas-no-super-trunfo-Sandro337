#include <stdio.h>



int main() {
   char estado;
   char cidade[20];
   char codigo[20];
   int populacao;
   float areaemkm;
   float PIB;
   int pontoturistico;
   float dencidadepopulacional;
   float pibpercapital;

  printf("carta1 \n"); 
   // depois de um bom tempo ta tudo ok com a primeira carta

   printf("digite letra do estado: \n");
   scanf("%c" , &estado );
   //adicionar somente a primeira letra do estado 

   printf("digite a cidade: \n");
   scanf("%s" , &cidade);

   printf("codigo da crata; \n");
   scanf("%s" , &codigo);

   printf("populacao: \n");
   scanf("%d" , &populacao);

   printf("area em km: \n");
   scanf("%f" , &areaemkm);

   printf("PIB: \n");
   scanf("%f" , &PIB);

   printf("ponto turistico: \n");
   scanf ("%i", &pontoturistico);
   
   dencidadepopulacional= (float) populacao / areaemkm ;
   pibpercapital= (float) PIB*(10000000) / populacao; 

   printf("carta1 \n ");
   printf("nome do estado: %c \n", estado);
   printf("nome da cidade: %s \n", cidade);
   printf("codigo: %s \n ", codigo);
   printf("populacao: %d  \n" , populacao);
   printf("area em km: %f \n" , areaemkm);
   printf("PIB: %f \n" , PIB);
   printf("pontos turisticos: %i \n" , pontoturistico); 
   printf("A dencidade populacional é: %0.2f\n" , dencidadepopulacional);
   printf("O PIB pre capital é: %0.2f\n" , pibpercapital);


   printf("carta2 \n"); 
   

   printf("digite letra do estado: \n");
   scanf("%c" , &estado );
   // digitar somente a primeira letra do estado 

   printf("digite a cidade: \n");
   scanf("%s" , &cidade);

   printf("codigo da crata; \n");
   scanf("%s" , &codigo);

   printf("populacao: \n");
   scanf("%d" , &populacao);

   printf("area em km: \n");
   scanf("%f" , &areaemkm);

   printf("PIB: \n");
   scanf("%f" , &PIB);

   printf("ponto turistico: \n");
   scanf ("%i", &pontoturistico); 

   dencidadepopulacional= (float) populacao / areaemkm ;
   pibpercapital= (float) PIB / populacao; 

   printf("carta2 \n ");
   printf("nome do estado: %c \n", estado);
   printf("nome da cidade: %s \n", cidade);
   printf("codigo: %s \n ", codigo);
   printf("populacao: %d  \n" , populacao);
   printf("area em km: %f \n" , areaemkm);
   printf("PIB: %f \n" , PIB);
   printf("pontos turisticos: %i \n" , pontoturistico); 
   printf("A dencidade populacional é: %0.2f\n" , dencidadepopulacional);
   printf("O PIB pre capital é: %0.2f\n" , pibpercapital);


   

    return 0;
}
