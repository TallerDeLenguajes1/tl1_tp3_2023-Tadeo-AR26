#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    srand(time(NULL));
    int i, j, mayori = 0, mayorj = 0, menori = 0, menorj = 0;
    long int asd, produccion[5][12], ganancias[5], mayor, menor;
    printf("Tabla de ganancias\n");
    for(i = 0; i<5; i++){
        for(j = 0; j<12; j++){
            produccion[i][j] = 10000 + rand()%40000;
            printf("%ld ", produccion[i][j]);
        }
    printf("\n");
    }

    printf("El promedio de ganancias por a%co es:\n", 164);
    for(i = 0; i<5; i++){
        for(j = 0; j<15; j++){
            ganancias[i] = ganancias[i] + produccion[i][j];
        }
        ganancias[i] = (ganancias[i])/12;
        printf("a%co %d = %ld\n", 164, i+1, ganancias[i]);
    }

    mayor = produccion[0][0];
    menor = produccion[0][0];
    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            if(mayor < produccion[i][j]){
                mayor = produccion[i][j];
                mayori = i;
                mayorj = j;
            }
            if(menor > produccion[i][j]){
                menor = produccion[i][j];
                menori = i;
                menorj = j;
            }
        }
    }
    printf("La mayor ganancia se obtuvo en el mes %d del a%co %d. $%ld\n", mayorj+1, 164, mayori+1, mayor);
    printf("La menor ganancia se obtuvo en el mes %d del a%co %d. $%ld\n", menorj+1, 164, menori+1, menor);

    getchar();
    getchar();

    return 0;
}
