#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int isIn(int pArreglo[10000000], int buscado){
    for (int i = 0; i < 10000000; i++)
    {
        if(pArreglo[i] == buscado){
            return 1;
        }
    }
    return 0;
}
static int arreglo[10000000];
int main (int argc, char** argv){
    for (int i = 0; i < 10000000; i++)
    {
       arreglo[i] = i;
    }
    clock_t start = clock();
    int res = isIn(arreglo,-1);
    clock_t end = clock();
    double elapsed = (double)(end - start)/CLOCKS_PER_SEC;
    res? printf("Encontrado"):printf("No encontrado");
    printf("\nTiempo medido: %.3f microsegundos.\n", (elapsed*1000000));
    return 0;
}
