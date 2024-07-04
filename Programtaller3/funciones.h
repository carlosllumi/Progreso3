#include <stdio.h>
#include <string.h>

void buscarPorTamano(int *numHabitacion, char habitaciones[][3][40], double precios[]);
void buscarHotel(int *numHabitacion, char habitaciones[][3][40], double precios[]);
void realizarReserva(int numHabitacion, char habitaciones[][3][40], char clientes[][2][40], int reservas[][4]);
void buscarReservaPorCedula(int *numReserva, char clientes[][2][40], int reservas[][4]);
void imprimirReserva(int numReserva, int reservas[][4], char habitaciones[][3][40], double precios[]);
void pagarReserva(int numReserva, int reservas[][4], char habitaciones[][3][40], double precios[]);

// Nuevas funciones
void cargarClientes(char clientes[][2][40]);
void guardarClientes(char clientes[][2][40]);
void cargarReservas(int reservas[][4]);
void guardarReservas(int reservas[][4]);