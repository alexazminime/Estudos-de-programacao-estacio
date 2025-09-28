    #include <stdio.h>

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