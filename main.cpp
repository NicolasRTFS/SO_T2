#include <stdio.h>
#include <ostream>

int main(int argc, char **argv){
    printf("Por favor, insira um metodo de gerenciamento de memoria livre:\n1 para Bitmap\n2 para Lista Encadeada\n");
    int arg;
    scanf("%d", &arg);
    if (arg == 1){
        printf("Voce escolheu o modo Bitmap.\n");
    } else if (arg == 2) {
        printf("Voce escolheu o modo Lista Encadeada.\n");
    } else {
        printf("Input invalido. Por favor insira um entrada valida.\n");
    }
    return 0;
}