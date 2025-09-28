#include <stdio.h>

int main(){
    /*Incremento (++)
    Pré-incremento ++a
    Pós-incremento a++
    Decremento (--)
    Pré-decremento --a
    Pós-decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes incremento: %d \n", numero1);
    
    //exemplo de escrever o codigo sem ser simplificado
    //numero1 = numero1 +1; - exemplo de escrever o codigo sem ser simplificado
    //numero1 += 1;
    //numero1++;
    //Pós-incremento
    //resultado = numero1;
    //numero1++;
    resultado = numero1++;
    printf("Apos pós-incremento - numero 1: %d - resultado: %d\n" , numero1, resultado);
    //exemplo de pré-incremento
    resultado = ++numero1;
    printf("Apos pré-incremento - numero 1: %d - resultado: %d\n" , numero1, resultado);

    //exemplo de escrever o codigo sem ser simplificado
    //numero1 = numero1 -1; - 
    //numero1 -= 1;
 //   numero1--;
 //   printf("Apos decremento: %d \n" , numero1);

    resultado = numero1--;
    printf("Apos pós-incremento - numero 1: %d - resultado: %d\n" , numero1, resultado);

    resultado = --numero1;
    printf("Apos pré-incremento - numero 1: %d - resultado: %d\n" , numero1, resultado);
    
    
    return 0;

}