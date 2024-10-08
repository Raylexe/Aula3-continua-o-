#include <stdio.h>

int main(){

    float tamanho;
    float velocidade;
    
    printf("informe o tamanho do arquivo:");
    scanf("%f", & tamanho);

    printf("informe a velocidade:");
    scanf("%f", & velocidade);
    float tempo=tamanho/(velocidade/8);
    printf("%f",tempo);
 }