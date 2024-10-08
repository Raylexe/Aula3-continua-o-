#include <stdio.h>
#include <math.h>

int main(){

   int nota1;
   int nota2;
   int nota3;
   int nota4;

   printf("Insira a primeira nota");
   scanf("%d", &nota1);

   printf("Insira a segunda nota");
   scanf("%d", &nota2);

   printf("Insira a terceira nota");
   scanf("%d", &nota3);

   printf("Insira a quarta nota");
   scanf("%d", &nota4);

   int notat=(nota1+nota2+nota3+nota4)/4;

    if(notat>=7){
        printf("Aluno aprovado!");
    }

    if(notat>=4 && notat<7){
        printf("Exame final.");
    }

    if(notat<4){
        printf("Aluno reprovado...");
    };
 }