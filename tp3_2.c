#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 30

struct Listado{
    char *nombres;
} typedef Listado;

void cargarNombres(Listado *listado);
void mostrarNombres(Listado *listado);

int main(){
    Listado *listado;
    listado = malloc(sizeof(Listado)*5);
    cargarNombres(listado);
    fflush(stdin);
    mostrarNombres(listado);
    free(listado);

    return 0;
}

void cargarNombres(Listado *listado){
    char buff[MAX];
    for(int i; i<5; i++){
        printf("Ingrese el nombre numero %d\n", i+1);
        gets(buff);
        listado->nombres = malloc(sizeof(Listado)*(strlen(buff)+1));
        strcpy(listado->nombres, buff);
        listado++;
    }
}

void mostrarNombres(Listado *listado){
    for(int i; i<5; i++){
        printf("%d- %s\n", i+1, listado->nombres);
        listado++;
    }
}