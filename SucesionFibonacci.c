#include <stdio.h>

//Creamos una funcion para poder calcular los elementos de la sucesión de forma recursiva
int fibo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main() {
    int nElementos, elemento, opcion;
    do
    {
    //Pedimos el numero de elementos de la sucesión que desea el usuario
    printf("Ingresa el numero de elementos que desea: ");
    scanf("%d", &nElementos);

    printf("Los primeros %d numeros de la sucesion de Fibonacci son:\n", nElementos);

    //Utilizamos la estructura de control "for" para generar los numeros de la sucesion
    // segun los numeros que pidio el usuario
    for (elemento = 0; elemento < nElementos; elemento++) {
        printf("%d, ", fibo(elemento));
    }
    printf("\nDesea volver a calcular?\n");
    printf("1. No / 2. Si\n");
    scanf("%d",&opcion);
    } while (opcion !=1);
    
    return 0;
}