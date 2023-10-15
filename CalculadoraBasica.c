#include <stdio.h>

int suma(int a, int b) {
    
    int total = a + b;
    return total;
}

int resta(int a, int b) {
    int total = a - b;
    return total;
}

int multiplicar(int a, int b) {
    int total = a * b;
    return total;
}

int division(int a, int b) {
    if (b == 0) {
        printf("indeterminado\n");
        return 0;
    }
    int total = a / b;
    return total;
}

int main() {
    int  c, d, operacion, opcion;
    
    do {
    printf("Ingrese el primer valor: ");
    scanf("%d",&c);
    printf("Ingrese el segundo valor: ");
    scanf("%d",&d);

    printf("Cual operacion desea realizar\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    scanf("%d",&operacion);

    switch (operacion)
    {
    case 1:
        printf("%d + %d = %d\n",c, d,suma(c,d));
        break;
    case 2:
        printf("%d - %d = %d\n",c, d, resta(c,d));
        break;
    case 3:
        printf("%d * %d = %d\n", c, d, multiplicar(c,d));
        break;
    case 4:
        printf("%d / %d = %d\n", c, d, division(c,d));
        break;
    default:
        printf("Operacion inexistente\n");
        break;
    }
    printf("Desea volver a hacer otra operacion?\n");
    printf("1. No / 2. Si\n");
    scanf("%d",&opcion);
    } while (opcion != 1);

    return 0;
}