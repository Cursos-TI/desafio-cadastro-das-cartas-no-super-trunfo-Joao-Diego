#include <stdio.h>

int main (){
    char Estado;
    char codigo [30];
    char Nome[30];
    int população;
    float Area;
    float PIB;
    int numero;

    printf("Nome do Estado: ");
    scanf("%d", &Estado);
    printf("Nome do Estado é: %d \n", Estado);

    printf("Nome da Cidade: ");
    scanf("%d", &Nome);
    printf("Nome da Cidade é: %d \n", Nome);

    printf("Codigo da Carta: ");
    scanf("%s", &codigo);
    printf("O cogigo é: %s \n", codigo);

    printf("Número da População: ");
    scanf("%f", população);
    printf("Número da População é: %f \n", população);


}