#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 30

char *tiposProductos[]={"Galletas","Snack","Cigarrillos","Caramelos","Bebidas"};

struct Producto{
    int ProductoID; //Numerado en ciclo iterativo
    int cantidad; // Entre 1 y 10
    char *tipoProducto; // Algun valor del arreglo tiposProductos
    float PrecioUnitario;  // Entre 1 y 100
} typedef Producto;

struct Cliente{
    int ClienteID;  //Numerado en el ciclo iterativo
    char *NombreCliente;  //Ingresado por el usuario
    int cantidadProductosAPedir; // Aleatorio entre 1 y 5
    Producto *Productos; // El tamaño de este arreglo depende de la variable "cantidadProductosAPedir"
}typedef Cliente;

void cargarClientes(Cliente *Lista, int cantClientes);


int main(){
    int cantClientes = 10;
    Cliente *Lista;

    while(cantClientes > 5){
        printf("Ingrese la cantidad de clientes (No puede ser mayor a 5)\n");
        scanf("%d", &cantClientes);
    }

    Lista = malloc(sizeof(Cliente)*cantClientes);
    cargarClientes(Lista, cantClientes);

    return 0;
}


void cargarClientes(Cliente *Lista, int cantClientes){
    char buff[MAX];
    int i, j, tipoProductoAux;
    srand(time(NULL));
    for(i = 0; i<cantClientes; i++){
        Lista->ClienteID = i + 1; //Asigno la ID

        printf("Ingrese el nombre del cliente %d\n", Lista->ClienteID);
        fflush(stdin);
        gets(buff);
        Lista->NombreCliente = malloc(sizeof(char)*strlen(buff)+1); //Asigno dinamicamente memoria para el nombre
        strcpy(Lista->NombreCliente, buff);

        Lista->cantidadProductosAPedir = rand()%5+1;
        Lista->Productos = malloc(sizeof(Producto)*Lista->cantidadProductosAPedir);
        for(j = 0; j < Lista->cantidadProductosAPedir; j++){
            Lista->Productos->ProductoID = j+1;
            Lista->Productos->cantidad = rand()%10+1;
            tipoProductoAux = rand()%5;
            Lista->Productos->tipoProducto = tiposProductos[tipoProductoAux];
            Lista->Productos->PrecioUnitario = (float)(rand()%100+1);
            Lista->Productos++;
        }
        Lista++;
    }
}