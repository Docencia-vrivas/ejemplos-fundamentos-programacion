// Programa: Adivina un número
// Versión 2: Pedimos al usuario un dato para ver si acierta el número a adivinar
// Entrada: El dato que introduce el usuario
// Salida: muestra en pantalla el número que había que adivinar

#include <iostream>
using namespace std;

int main() {
	int numero_a_adivinar = 12; 	// Declaración e inicialización de la variable
    int numero_del_usuario;

    cout << "Intente adivinar el número que he pensado." << endl
        << "¿Qué número cree que es? ";

    cin >> numero_del_usuario;

	cout << "El número que había que adivinar es el "
         << numero_a_adivinar
         << " y usted ha dicho el "
         << numero_del_usuario
         << endl; // Salida en pantalla


    cout << endl << endl;

	return 0;
}
