#include <stdio.h>

int main(){

            float nota1, nota2, nota3;
            float media;
            char nome1[100];
            
            printf("**** Programa de calculo de média **** \n\n\n");

            printf("Entre com o nome do aluno: ");
                scanf("%[^\n]" ,nome1);
    
            printf("Entre com a primeira nota: ");
                scanf(" %f",&nota1);
    
            printf("Entre com a segunda nota: ");
                scanf(" %f",&nota2);
    
            printf("Entre com a terceira nota: ");
                scanf(" %f",&nota3);
        
                media = (float) (nota1 + nota2 + nota3) / 3;
        
                printf("\nA média do aluno %s é %.2f\n\n\n\n\n", nome1, media);

            return 0;
        }
