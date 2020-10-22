// Programa: Adivina un número
// Versión 5: Pedimos al usuario un dato para ver si acierta el número a adivinar y le decimos si ha acertado o no, y si es mayor o menor.
//            Repetimos el proceso hasta que adivina el número.
// Entrada: El dato que introduce el usuario
// Salida: muestra en pantalla el número que había que adivinar y si ha acertado o no

#include <iostream>
using namespace std;

int main() {
	int numero_a_adivinar = 12; 	// Declaración e inicialización de la variable
    int numero_del_usuario;

    do {
        cout << "Intente adivinar el número que he pensado." << endl
            << "¿Qué número cree que es? ";

        cin >> numero_del_usuario;

        if( numero_a_adivinar==numero_del_usuario ) {
            cout << "¡Enhorabuena, ha acertado!" << endl;
        } else {
            if( numero_a_adivinar<numero_del_usuario) {
                cout << "No ha acertado. El número que debe adivinar es MENOR que el que ha dicho." << endl;
            } else {
                cout << "No ha acertado. El número que debe adivinar es MAYOR que el que ha dicho." << endl;
            }
        }
    } while (numero_del_usuario!=numero_a_adivinar);// while
    cout << endl << endl;

	return 0;
}
