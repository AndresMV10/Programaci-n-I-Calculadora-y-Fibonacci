#include <stdio.h>

#define NUM_PRODUCTOS 5

int main() {
    //Declaramos variables necesarias
    char nombre[10], apellido[10], ubicacion[10];
    char cedula[10], telefono[10];
    char productos[NUM_PRODUCTOS][25] = {"Llantas", "Kit Pastillas de freno", "Kit de embrague", "Faro", "Radiador"};
    int precios[NUM_PRODUCTOS] = {150, 55, 180, 70, 120};
    int cantidades[NUM_PRODUCTOS] = {0};
    int subtotal = 0, total = 0, impuesto;
    int facturar, opcion, i, opciones=0;

    //Pedimos datos al usuario
    
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su apellido: ");
    scanf("%s", apellido);
    printf("Ingrese su ubicación: ");
    scanf("%s", ubicacion);
    printf("Ingrese su cedula: ");
    scanf("%s", cedula);
    printf("Ingrese su telefono: ");
    scanf("%s", telefono);

    //Hacemos un bucle, y utilizamos arrays para pedir al usuario que producto desea comprar, cantidad, y si desea seguir o no, guardando la información
    do {
        printf("\nMenú de productos:\n");
        for (i = 0; i < NUM_PRODUCTOS; i++) {
            printf("%d. %s (Precio: $%d)\n", i + 1, productos[i], precios[i]);
        }
        printf("Seleccione un producto (1-%d) o 0 para facturar: ", NUM_PRODUCTOS);
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= NUM_PRODUCTOS) {
            printf("¿Cuantas unidades desea comprar? ");
            scanf("%d", &cantidades[opcion - 1]);
        } else if (opcion != 0) {
            printf("Opción no válida\n");
        }

    } while (opcion != 0);

    for (i = 0; i < NUM_PRODUCTOS; i++) {
        subtotal += cantidades[i] * precios[i];
    }


    // Mostrar los detalles de la factura
    printf("\nFactura:\n");
    printf("Nombre: %s\n", nombre);
    printf("Apellido: %s\n", apellido);
    printf("Cedula: %s\n", cedula);
    printf("Ubicacion: %s\n", ubicacion);
    printf("Telefono: %s\n", telefono);
    printf("-------------------------------------------------------------\n");
    printf("--------------------------Detalle----------------------------\n");
    printf("-------------------------------------------------------------\n");
    printf("Cantidad\tDescripcion       \tPrecio \t     Total\n");

    for (i = 0; i < NUM_PRODUCTOS; i++) {
        if (cantidades[i] > 0) {
            printf("%d\t        %s \t      $%d \t     $%d\n", cantidades[i], productos[i], precios[i], cantidades[i] * precios[i]);
        }
    }

    if (subtotal > 999)
    {
        subtotal = subtotal * 0.90;
    } else if (subtotal > 500) {
        subtotal = subtotal * 0.93;
    } else if ( subtotal >100) {
        subtotal = subtotal * 0.95;
    } else {
        subtotal = subtotal; }
    
    impuesto = subtotal * 0.12;
    total = subtotal + impuesto;

    printf("\nSubtotal: $%d\n", subtotal);
    printf("Impuesto (12%%): $%d\n", impuesto);
    printf("Total: $%d\n", total);

    return 0;
}