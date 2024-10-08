#include <stdio.h>
#include <math.h>

int main(){

    float capital;
    float taxa;
    float periodo;
    
    printf("informe a capital:");
    scanf("%f", & capital);

    printf("informe a taxa de juros mensal:");
    scanf("%f", & taxa);

    printf("informe o periodo de aplicacao em mes:");
    scanf("%f", & periodo);

    float montante=capital*pow(1+taxa/100,periodo);
    printf("%f",montante);
 }