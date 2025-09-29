#include <stdio.h>
    #define ANSI_COLOR_YELLOW  "\x1b[33m"
    #define ANSI_COLOR_RESET   "\x1b[0m"
    #define VERMELHO    "\x1b[31m"
    //exemplo de variaveis inteiras
    void inteiras(){

        int a = 10;
        int b = 3;
        int soma = a + b;
        int diferenca = a - b;
        int produto = a * b;
        int quociente = a / b; //Note que a divisão de inteiros resulta em numeros inteiros

            printf(VERMELHO"Manipulação e conversao de tipos de dados\n\n"ANSI_COLOR_RESET);
            printf(ANSI_COLOR_YELLOW"Exemplo de variaveis inteiras\n"ANSI_COLOR_RESET);
            printf("Soma: %d\n" , soma);
            printf("Diferença: %d\n" , diferenca);
            printf("Produto: %d\n" , produto);
            printf("Quociente: %d\n\n" , quociente);
        }

    //exemplo de variaveis flutuantes com duas casas decimais
    void flutuante(){

        float x = 5.5;
        float y = 2.2;
        float soma = x + y;
        float diferenca = x - y;
        float produto = x * y;
        float quociente = x / y; //Divisao de ponto flutuante

            printf(ANSI_COLOR_YELLOW"Exemplo de variaveis flutuantes com duas casas decimais\n"ANSI_COLOR_RESET);
            printf("Soma: %.2f\n" , soma);
            printf("Diferença: %.2f\n" , diferenca);
            printf("Produto: %.2f\n" , produto);
            printf("Quociente: %.2f\n\n" , quociente);
        }

    //conversao entre tipos de dados
    //exemplo de conversao implicita (tomar cuidado com esse tipo de converção pois podem ocorrer perca de dados)
    void implicita(){
        int a = 10; //Note que a variavel 'a' é do tipo inteiro
        float b = 3.5;
        float resultado = a + b; // 'a' é convertido implicitamente para float
            printf(VERMELHO"Conversao entre tipos de dados\n\n"ANSI_COLOR_RESET);
            printf(ANSI_COLOR_YELLOW"Exemplo de conversao implicita\n"ANSI_COLOR_RESET);
            printf("Resultado: %.2f\n\n" , resultado);
        }

    //exemplo de conversçao explicita (casting)
    void explicita(){

        int a = 10;
        int b = 3;
        float quociente = (float) a / b; // 'a' é explicitamente convertido para float

            printf(ANSI_COLOR_YELLOW"Exemplo de conversçao explicita\n"ANSI_COLOR_RESET);
            printf("Quociente: %.2f\n\n\n" , quociente);
            printf(VERMELHO"Verifique os tipos\n Sempre verifique os tipos de dados ao realizar operações aritméticas para evitar\n resultados inesperados.\n\n");
            printf("Use casting quando necessário\n Utilize casting explícito para garantir que as operações sejam realizadas no tipo de dado correto.\n\n");
            printf("Cuidado com a precisão\n Lembre-se de que variáveis de ponto flutuante podem introduzir erros de precisão.\n Use double para maior precisão quando necessário.\n\n"ANSI_COLOR_RESET);
        }
        /*
        Verifique os tipos
        Sempre verifique os tipos de dados ao realizar operações aritméticas para evitar
        resultados inesperados.

        Use casting quando necessário
        Utilize casting explícito para garantir que as operações sejam realizadas no tipo de dado correto.

        Cuidado com a precisão
        Lembre-se de que variáveis de ponto flutuante podem introduzir erros de precisão.
        Use double para maior precisão quando necessário.
        */
    
    int main(){

        inteiras();
        flutuante();
        implicita();
        explicita();
        return 0;
    }