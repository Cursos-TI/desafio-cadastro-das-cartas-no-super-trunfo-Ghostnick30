#include  <stdio.h>

// Estrutura para armazenar os dados de uma carta 
struct Carta{
    char codigo[4];
    char estado;
    char nomedacidade;
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} ;

int main() {
    struct Carta carta1;
    struct Carta carta2;

    // Cadastro da carta 1 
    printf("cadstro da carta 1\n");
    printf("digite o estado: A ");
    scanf('%s', carta1.estado);
    printf("digite o codigo da carta (ex: A01): A01 ");
    scanf("%s", &carta1.codigo);
    printf("digite o nome da cidade: Brasília ");
    scanf("%s", &carta1.nomedacidade);
    printf("digite a populacao: 2.952.818 ");
    scanf("%d", &carta1.populacao);
    printf("digite a área: 5.761 Km²");
    scanf("%f", &carta1.area);
    printf("digite o PIB: 84,2 bilhões reais ");
    scanf("%f", &carta1.pib);
    printf("digte o número de pontos turísticos: 32 ");
    scanf("%d", &carta1.pontosTuristicos);


    printf("\n");


    // Cadastro da Carta 2
    printf("Cadastro da carta 2\n");
    printf("digite o estado: G ");
    scanf("%s", carta2.estado);
    printf("digite o codigo da carta (ex: B03): G03 ");
    scanf("%s", carta2.codigo);
    printf("digite o nome da cidade: Goiana ");
    scanf("%d", carta2.nomedacidade);
    printf("digite a população: 1.494.599 ");
    scanf("%d", &carta2.populacao);
    printf("digite a área:728,8 km² ");
    scanf("%f", &carta2.area);
    printf("digite o PIB: 59,9 bilhões de reais ");
    scanf("%f", &carta2.pib);
    printf("digite o numero de pontos turístcos: 40 ");
    scanf("%d", &carta2.pontosTuristicos);


    printf("\n");
    
    //Exibição dos dados da carta 1
    printf("\n--- Dados da carta 1 ---\n");
    printf("estado: %s\n", carta1.estado);
    printf("codigo: %s\n", carta1.codigo);
    printf("nome da cidade: %d\n", carta1.nomedacidade);
    printf("população: %d\n", carta1.populacao);
    printf("area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    // Exibição dos dados da carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("estado: %s\n", carta2.estado);
    printf("codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %d\n", carta2.nomedacidade);
    printf("população: %d\n", carta2.populacao);
    printf("Àrea: %.2f\n", carta2.area);
    printf("pib : %.2f\n", carta2.pib);
    printf("Pontos Turísticos : %d\n", carta2.pontosTuristicos);

    
    return 0;
    
}
