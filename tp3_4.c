#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 30

struct Listado{
    char *nombres;
} typedef Listado;

void cargarNombres(Listado *listado, int cantNombres);
void mostrarNombres(Listado *listado, int cantNombres);

int main(){
    Listado *listado;
    int cantNombres;
    printf("Ingrese la cantidad de nombres que desea mostrar\n");
    scanf("%d", &cantNombres);
    fflush(stdin);
    listado = malloc(sizeof(Listado)*cantNombres);
    cargarNombres(listado, cantNombres);
    fflush(stdin);
    mostrarNombres(listado, cantNombres);
    free(listado);

    return 0;
}

void cargarNombres(Listado *listado, int cantNombres){
    char buff[MAX];
    for(int i; i<cantNombres; i++){
        printf("Ingrese el nombre numero %d\n", i+1);
        gets(buff);
        listado->nombres = malloc(sizeof(Listado)*(strlen(buff)+1));
        strcpy(listado->nombres, buff);
        listado++;
    }
}

void mostrarNombres(Listado *listado, int cantNombres){
    for(int i; i<cantNombres; i++){
        printf("%d- %s\n", i+1, listado->nombres);
        listado++;
    }
}