#include <stdio.h>

void somaR (int x, int y, int *z) {
    *z = x + y;

    puts("===> DENTRO DA FUNCAO COM PASSAGEM POR REFERENCIA");
    printf("Endereco de X = %p, Conteudo de X = %d\n", &x, x);
    printf("Endereco de Y = %p, Conteudo de Y = %d\n", &y, y);
    printf("Endereco de Z = %p, Conteudo de Z = %d\n\n", &z, *z);
}

int main() {
    int a = 10;
    int b = 20;
    int c;

    puts("### ANTES DE CHAMAR A FUNCAO");
    printf("Endereco de A = %p, Conteudo de A = %d\n", &a, a);
    printf("Endereco de B = %p, Conteudo de B = %d\n", &b, b);
    printf("Endereco de C = %p, Conteudo de C = %d\n\n", &c, c);

    somaR(a, b, &c);

    puts("### DEPOIS DE CHAMAR A FUNCAO COM PASSAGEM POR REFERENCIA");
    printf("Endereco de A = %p, Conteudo de A = %d\n", &a, a);
    printf("Endereco de B = %p, Conteudo de B = %d\n", &b, b);
    printf("Endereco de C = %p, Conteudo de C = %d\n\n", &c, c);
    return 0;
}
