#include <stdio.h>

int main(){
    /*
    Atribuição simples (=)
    Atribuição com soma (+=)
    Atribuição com subtração (-=)
    Atribuição com multiplicação (*=)
    Atribuição com divisão (/=)
    */

    int numero1 = 10, numero2, resultado;
    
    resultado = 10;
    printf("resultado: %d \n" , resultado);
    
    //reultado = resultado + 20;
    resultado += 20;
    printf("resultado: %d \n" , resultado);
    
    //resultado = resultado - numero1;
    resultado -= numero1;
    printf("Resultado: %d \n" , resultado);

    //resultado = resultado * 5;
    resultado *= 5;
    printf("resultado: %d \n" , resultado);
    
    //resultado = resultado / 2:
    resultado /= 2;
    printf("resultado: %d \n" , resultado);

    return 0;

}