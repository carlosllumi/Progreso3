#include <stdio.h>
#include "funciones.h"

int main() {
    int opcion, numHabitacion, numReserva;

    cargarDatos();

    while (1) {
        printf("\nSistema de Reservas de Hotel\n");
        printf("1. Buscar habitación por tamaño\n");
        printf("2. Buscar habitación por hotel\n");
        printf("3. Realizar reserva\n");
        printf("4. Buscar reserva por cédula\n");
        printf("5. Imprimir reserva\n");
        printf("6. Pagar reserva\n");
        printf("7. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                buscarPorTamano(&numHabitacion);
                break;
            case 2:
                buscarHotel(&numHabitacion);
                break;
            case 3:
                realizarReserva(numHabitacion);
                break;
            case 4:
                buscarReservaPorCedula(&numReserva);
                break;
            case 5:
                imprimirReserva(numReserva);
                break;
            case 6:
                pagarReserva(numReserva);
                break;
            case 7:
                guardarDatos();
                return 0;
            default:
                printf("Opción no válida.\n");
                break;
        }
    }
}