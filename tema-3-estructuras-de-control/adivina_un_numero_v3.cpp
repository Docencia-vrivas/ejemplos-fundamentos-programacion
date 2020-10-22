// Programa: Adivina un número
// Versión 3: Pedimos al usuario un dato para ver si acierta el número a adivinar y le decimos si ha acertado o no.
// Entrada: El dato que introduce el usuario
// Salida: muestra en pantalla el número que había que adivinar y si ha acertado o no

#include <iostream>
using namespace std;

int main() {
	int numero_a_adivinar = 12; 	// Declaración e inicialización de la variable
    int numero_del_usuario;

    cout << "Intente adivinar el número que he pensado." << endl
        << "¿Qué número cree que es? ";

    cin >> numero_del_usuario;

    if( numero_a_adivinar==numero_del_usuario ) {
        cout << "¡Enhorabuena, ha acertado!" << endl;
    } else {
        cout << "¡Lo siento, no ha acertado!" << endl;
    }


    cout << endl << endl;

	return 0;
}
