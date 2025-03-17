#include <stdio.h>

int main() {
    char Estado;
    char Nome[300];
    char Codigo[300];
    float Populacao;
    float Area;  
    float PIB;
    int NumTur;

    
    printf("Digite o nome do Estado : ");
    scanf("%s", &Estado);

    
    printf("Nome da Cidade: ");
    scanf("%s", Nome);

    printf("Codigo da Carta: ");
    scanf("%s", Codigo);

    
    printf("Quantidade de area: ");
    scanf("%f", &Area);

    
    printf("Populacao: ");
    scanf("%f", &Populacao);

    
    printf("PIB: ");
    scanf("%f", &PIB);

    
    printf("Numero de turistas: ");
    scanf("%d", &NumTur);


    printf("Dados Coletados:\n");
    printf("Estado: %c\n", Estado);
    printf("Nome da Cidade: %s\n", Nome);
    printf("Codigo da Carta: %s\n", Codigo);
    printf("Area: %.2f\n", Area);
    printf("Populacao: %.2f\n", Populacao);
    printf("PIB: %.2f\n", PIB);
    printf("Numero de turistas: %d\n", NumTur);

    return 0;
}
   
