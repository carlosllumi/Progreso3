#ifndef FUNCIONES_H
#define FUNCIONES_H

void cargarDatos();
void guardarDatos();
void buscarPorTamano(int *numHabitacion);
void buscarHotel(int *numHabitacion);
void realizarReserva(int numHabitacion);
void buscarReservaPorCedula(int *numReserva);
void imprimirReserva(int numReserva);
void pagarReserva(int numReserva);