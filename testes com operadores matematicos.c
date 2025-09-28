#include <stdio.h>


    //operador soma(+)   
    void soma(){   

        int a = 5;
        int b = 3;
        int soma = a + b; // soma será 8
        printf("A soma será: %d\n" , soma);
    }



    //operador subtração (-)
    void subtracao(){ 

        int a = 5;
        int b = 3;
        int subtracao = a - b; // subtracao será 2
        printf("A subtração será: %d\n" , subtracao);
    }



    //Operador multiplicacao(*)
    void multiplicacao(){

        int a = 5;
        int b = 3;
        int multiplicacao = a * b; // multiplicacao será 15
        printf("A multiplicação será: %d\n" , multiplicacao);
    }



    //operador divisão
    void divisao(){

        int a = 10;
        int b = 3;
        int divisao = a / b; // divisao será 3
        printf("A divisão será: %d\n" , divisao);
    }



    //operadores de atribuição
    void atribuicao (){

        int a = 5; //"a" vale 5
        printf("Atribuição simples (=): %d\n" , a);

        int b = 5;
        b += 3; // a será 8 (equivalente a a = a + 3)
        printf("Atribuição com soma (+=): %d\n" , b);

        int c = 5;
        c -= 3; // a será 2 (equivalente a a = a - 3)
        printf("Atribuição com subtração (-=): %d\n", c);

        int d = 5;
        d *= 3; // a será 15 (equivalente a a = a * 3)
        printf("Atribuição com multiplicação (*=): %d\n" , d);

        int e = 10;
        e /= 2; // a será 5 (equivalente a a = a / 2)
        printf("Atribuição com divisão (/=): %d\n" , e);
    }

    //operadores de incremento
    void incremento(){

        int f =1;
        f++; // i terá o valor 2
        printf("Operador incremento (++): %d\n" , f);

        int g = 5;
        int h = ++g; // a será 6, b será 6
        printf("Pré-incremento (++variavel): %d\n" , g);

        int i = 5;
        int j;
        i++; // a incrementa o valor e vale 6
        j = i; // b recebe o valor de a e assume o valor 6
        printf("Outro exemplo de pré-incremento (++variavel): %d\n" , i);

        int k = 5;
        int l = k++; // a será 6, b será 5
        printf("Pós-incremento (variavel++): %d\n" , k);

        int m = 5;
        int n;
        n = m; // b recebe o valor de a e assume o valor 5
        m++; // a incrementa o valor e vale 6
        printf("Outro exemplo de pós-incremento (variavel++): %d\n" , m);
    }  


    //operador decremento
    void decremento(){

        int o =10;
        o--; // i terá o valor 9 
        printf("Operador decremento (--): %d\n" , o);

        int p = 5;
        int q = --p; // a será 4, b será 4
        printf("Pré-decremento (--variavel): %d\n" , p);

        int r = 5;
        int s = r--; // a será 4, b será 5
        printf("Pós-decremnto (variavel--): %d\n" , r);
    }

    int main(){

    
        soma();
        subtracao();
        multiplicacao();
        divisao();
        atribuicao();
        incremento();
        decremento();

        return 0;
    }