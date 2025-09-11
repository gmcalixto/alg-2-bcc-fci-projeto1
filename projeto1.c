#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s <entrada>\n", argv[0]);
        return 1;
    }

    //Monte seu programa aqui, sendo argv[1] o vetor com a entrada em código morse
    //use o printf para observar a entrada só em caso de depuração. A entrada não deve ser impressa na entrega final
    printf("%s\n",argv[1]);

    char saida[256];
    strcpy(saida,"SAIDA");


    printf("%s\n",saida);
    return 0;
}
