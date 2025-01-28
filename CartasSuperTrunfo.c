#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigo[3]; char nomePais[60]; char nomeCidade[60];
    int populacao, pontosTuristico;
    float area, pib, dencidade, pibCapta;

   printf("*** Criando jogo Super Trunfo ***\n\n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Informe o codigo da carta:");
    scanf("%s", &codigo);

    printf("Informe o nome do País:");
    scanf("%s", &nomePais);
    
    printf("Infome o nome da cidade:");
    scanf("%s", &nomeCidade);
    
    printf("Informe a área da cidade:");
    scanf("%f", &area);
        
    printf("Informe a quantidade de população da cidade:");
    scanf("%d", &populacao);
    
    printf("Informe pontuação turistica da cidade:");
    scanf("%d", &pontosTuristico);
        
    printf("Informe o PIB da cidade:");
    scanf("%f", &pib);
    
    dencidade = (float)populacao / area;
    pibCapta = (float)pib / populacao;

    printf("*** Como a Carta ficou ***\n\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf(" Codigo da Carta: %s \n", codigo);
    printf("Nome do País: %s \n", nomePais);
    printf("Nome da Cidade: %s \n",nomeCidade);
    printf("Área: %f \n",area);
    printf("População: %d \n",populacao);
    printf("Número de pontos turísticos: %d \n",pontosTuristico);
    printf("PIB: %f\n",pib);
    printf("Pib per Capita: %.2f\n",pibCapta);
    printf("Densidade Populacional: %.2f\n",dencidade);
   

    return 0;
}
