#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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


int main(){
    int cantClientes = 10;
    Cliente *Lista;

    while(cantClientes > 5){
        printf("Ingrese la cantidad de clientes (No puede ser mayor a 5)\n");
        scanf("%d", &cantClientes);
    }

    Lista = malloc(sizeof(Cliente)*cantClientes);

    return 0;
}