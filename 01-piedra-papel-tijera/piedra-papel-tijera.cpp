#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
using namespace std;

int main() {
	// Declaramos las variables
	int eleccionJugador;
	int eleccionComputadora;
	
	// Mostramos las opciones al jugador
	cout << "Elige una opcion: " << endl;
	cout << "1. Piedra" << endl;
	cout << "2. Papel" << endl;
	cout << "3. Tijeras" << endl;
	cout << "Ingresa el numero de tu eleccion: ";
	cin >> eleccionJugador;
	
	//Mostramos lo que eligio el jugador
	cout << "Elegiste: ";
	if (eleccionJugador == 1) {
		cout << "Piedra" << endl;
	} else if (eleccionJugador == 2) {
		cout << "Papel" << endl;
	} else {
		cout << "Tijeras" << endl;
	}
	
	// Generamos una eleccion aleatoria para la computadora
	srand(time(0)); // Semilla para generar numeros aleatorios
	eleccionComputadora = rand() % 3 + 1; // Genera un numero entre 1 y 3
	
	// Mostramos la eleccion de la computadora
	cout << "La computadora eligio: ";
	if (eleccionComputadora == 1) {
		cout << "Piedra" << endl;
	} else if (eleccionComputadora == 2) {
		cout << "Papel" << endl;
	} else {
		cout << "Tijeras" << endl;
	}
	
	// Comparamos las elecciones y determinamos el resultado
	if (eleccionJugador == eleccionComputadora) {
		cout << "Es un empate!" << endl;
	} else if ((eleccionJugador == 1 && eleccionComputadora == 3) || 
		(eleccionJugador == 2 && eleccionComputadora == 1) || 
		(eleccionJugador == 3 && eleccionComputadora == 2)) {
		cout << "Ganaste!" << endl;
	} else {
			cout << "Perdiste. La computadora gana." << endl;
		}
		
		return 0;
}
