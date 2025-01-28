#include <stdio.h>


int main() {
   
   
    char codigo1[3], nomePais1[60], nomeCidade1[60], codigo2[3], nomePais2[60], nomeCidade2[60];
    int populacao1, pontosTuristico1,populacao2, pontosTuristico2;
    float area1, pib1, dencidade1, pibCapta1, area2, pib2, dencidade2, pibCapta2;
   
    // titulo para imput da primeira carta
    printf("****Informe os dados da primeira carta ****\n\n");

    //Input dos dados da preimeira carta
    printf("Informe o codigo da carta:");
    scanf("%s", &codigo1);

    printf("Informe o nome do País:");
    scanf("%s", &nomePais1);
    
    printf("Infome o nome da cidade:");
    scanf("%s", &nomeCidade1);
    
    printf("Informe a área da cidade:");
    scanf("%f", &area1);
        
    printf("Informe a quantidade de população da cidade:");
    scanf("%d", &populacao1);
    
    printf("Informe pontuação turistica da cidade:");
    scanf("%d", &pontosTuristico1);
        
    printf("Informe o PIB da cidade:");
    scanf("%f", &pib1);

    printf("\n");

    //Cauculo de Densidade Populacional e PIB per Capita da primeira carta
    dencidade1 = (float)populacao1 / area1;
    pibCapta1 = (float)pib1 / populacao1;

    // titulo para imput da segunda carta
    printf("****Informe os dados da segunda carta ****\n\n");

    //Input dos dados da preimeira carta
    printf("Informe o codigo da carta:");
    scanf("%s", &codigo2);

    printf("Informe o nome do País:");
    scanf("%s", &nomePais2);
    
    printf("Infome o nome da cidade:");
    scanf("%s", &nomeCidade2);
    
    printf("Informe a área da cidade:");
    scanf("%f", &area2);
        
    printf("Informe a quantidade de população da cidade:");
    scanf("%d", &populacao2);
    
    printf("Informe pontuação turistica da cidade:");
    scanf("%d", &pontosTuristico2);
        
    printf("Informe o PIB da cidade:");
    scanf("%f", &pib2);

    //Cauculo de Densidade Populacional e PIB per Capita da segunda carta
    dencidade2 = (float)populacao2 / area2;
    pibCapta2 = (float)pib2 / populacao2;
    
        
    printf("\n");

    //print das informaçoes da primeira carta
    printf("****Carta - %s ****\n\n",codigo1);

    printf("Codigo da Carta: %s \n", codigo1);
    printf("Nome do País: %s \n", nomePais1);
    printf("Nome da Cidade: %s \n",nomeCidade1);
    printf("Área: %.2f \n",area1);
    printf("População: %d \n",populacao1);
    printf("Número de pontos turísticos: %d \n",pontosTuristico1);
    printf("PIB: %.2f\n",pib1);
    printf("Pib per Capita: %.2f\n",pibCapta1);
    printf("Densidade Populacional: %.2f\n",dencidade1);

    printf("\n");

    //print das informaçoes da segunda carta
    printf("****Carta - %s ****\n\n",codigo2);

    printf("Codigo da Carta: %s \n", codigo2);
    printf("Nome do País: %s \n", nomePais2);
    printf("Nome da Cidade: %s \n",nomeCidade2);
    printf("Área: %.2f \n",area2);
    printf("População: %d \n",populacao2);
    printf("Número de pontos turísticos: %d \n",pontosTuristico2);
    printf("PIB: %.2f\n",pib2);
    printf("Pib per Capita: %.2f\n",pibCapta2);
    printf("Densidade Populacional: %.2f\n",dencidade2);

    printf("\n");

    //Comparação entre as cartas 
    printf("**** Resultado da comparação entre as cartas \n\n***");

    if(area1 > area2){

        printf("Area vencedora e da carta: %s \n", codigo1);

    }else{

        printf("Area vencedora e da carta: %s \n", codigo2);

    }

    if(populacao1 > populacao2){

        printf("População vencedora e da carta: %s \n", codigo1);

    }else{

        printf("População vencedora e da carta: %s \n", codigo2);

    }

    if(pontosTuristico1 > pontosTuristico2){

        printf("Número de pontos turísticos vencedor e da carta: %s \n", codigo1);

    }else{

        printf("Número de pontos turísticos vencedor e da carta: %s \n", codigo2);

    }

    if(pib1 > pib2){

        printf("PIB vencedor e da carta: %s \n", codigo1);

    }else{

        printf("PIB vencedor e da carta: %s \n", codigo2);

    }

    if(pibCapta2 > pibCapta2){

        printf("Pib per Capita vencedor e da carta: %s \n", codigo1);

    }else{

        printf("Pib per Capita vencedor e da carta: %s \n", codigo2);

    }

    if(dencidade1 > dencidade2){

        printf("Densidade Populacional vencedor e da carta: %s \n:", codigo1);

    }else{

        printf("Densidade Populacional vencedor e da carta: %s \n:", codigo2);

    }


    printf("**** Fim ***");

    return 0;
    
}
