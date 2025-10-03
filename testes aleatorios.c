#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
 
// causes undefined behavior if i <= 0
// exits if i > 0
noreturn void exit_now(int i) // or _Noreturn void exit_now(int i)
{
    if (i > 0)
        exit(i);
}
 
int main(void)
{
    puts("Preparing to exit...");
    exit_now(2);
    puts("This code is never executed.");
}
   




/*
    // Definição das cores ANSI
    #define ANSI_COLOR_RED     "\x1b[31m"
    #define ANSI_COLOR_GREEN   "\x1b[32m"
    #define ANSI_COLOR_YELLOW  "\x1b[33m"
    #define ANSI_COLOR_RESET   "\x1b[0m"

    int main() {
        printf(ANSI_COLOR_RED "Este texto é vermelho!\n");
        printf(ANSI_COLOR_GREEN "Este texto é verde!\n");
        printf("Este texto é normal.\n");
        printf(ANSI_COLOR_YELLOW "Este texto é amarelo!\n");
        printf(ANSI_COLOR_RED "Este texto é " ANSI_COLOR_GREEN "vermelho e " ANSI_COLOR_YELLOW "amarelo" ANSI_COLOR_RESET "!\n"); // Combina cores
        return 0;
    }

        /*
        int main() {
        int num = 10;
        void *ptr = &num; // Um ponteiro void pode apontar para um int

        // Para acessar o valor de 'num', é necessário fazer um cast
        printf("O valor do ponteiro é: %d\n", *(int*)ptr); // Cast para int

        char c = 'A';
        ptr = &c; // Agora o mesmo ponteiro aponta para um char
        printf("O valor do ponteiro é: %c\n", *(char*)ptr); // Cast para char

        return 0;
        }
        */