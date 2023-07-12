#include <stdio.h>
#include <stdlib.h>

int main() {
    // alocacao de um vetor estatico (memoria stack)
    int vs[5] = {0, 10, 20, 30, 40};

    puts("### VETOR ESTATICO");
    printf("&vs = %p vs = %p\n", &vs, vs);

    for(int i = 0; i < 5; i++){
        printf("&vs[%d] = %p, vs[%d] = %d\n", i, &vs[i], i, vs[i]);
    }
    puts("\n");

    // alocacao de um vetor dinamico malloc (memoria stack)
    puts("### VETOR DINAMICO COM MALLOC");

    int *vh_mal = (int *) malloc(5 * sizeof(int)); // todos possuem lixos de memória

    printf("&vh_mal = %p vh_mal = %p\n", &vh_mal, vh_mal);

    for(int i = 0; i < 5; i++){
        printf("&vh_mal[%d] = %p, vh_mal[%d] = %d\n", i, &vh_mal[i], i, vh_mal[i]);
    }
    puts("\n");

    // alocacao de um vetor dinamico calloc (memoria stack)
    puts("### VETOR DINAMICO COM CALLOC");

    int *vh_cal = (int *) calloc(5, sizeof(int));

    printf("&vh_cal = %p vh_cal = %p\n", &vh_cal, vh_cal);

    for(int i = 0; i < 5; i++){
        printf("&vh_cal[%d] = %p, vh_cal[%d] = %d\n", i, &vh_cal[i], i, vh_cal[i]);
    }
    puts("\n");

    // Não estamos desalocando os vetores!!!

    return 0;
}
