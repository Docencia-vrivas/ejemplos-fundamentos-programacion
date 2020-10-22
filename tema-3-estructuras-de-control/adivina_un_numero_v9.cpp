// Programa: Adivina un número
// Versión 9: Pedimos al usuario un dato para ver si acierta el número a adivinar y le decimos si ha acertado o no, y si es mayor o menor.
//            Repetimos el proceso hasta que adivina el número o ha introducido 10 números, usando un bucle FOR.
//            UNa vez acabado,preguntamos al usuario si desea jugar otra vez.
// Entrada: El dato que introduce el usuario
// Salida: muestra en pantalla el número que había que adivinar y si ha acertado o no

#include <iostream>
using namespace std;

int main() {
	int numero_a_adivinar = 12; 	// Declaración e inicialización de la variable
    int numero_del_usuario;
    char desea_seguir;

    // Bucle que controla si el usuario desea seguir jugando o no.
    do {
        // Bucle for que controla si el usuario ha adivinado el número o lleva ya 10 intentos.
        numero_del_usuario=0;
        for( int i=0; numero_del_usuario!=numero_a_adivinar && i<10; ++i) {
            cout << "Intente adivinar el número que he pensado." << endl
                << "¿Qué número cree que es? ";

            cin >> numero_del_usuario;

            // Condicional que comprueba si ha acertado o si el número es mayor o menor al buscado.
            if( numero_a_adivinar==numero_del_usuario ) {
                cout << "¡Enhorabuena, ha acertado!" << endl;
            } else {
                if( numero_a_adivinar<numero_del_usuario) {
                    cout << "No ha acertado. El número que debe adivinar es MENOR que el que ha dicho." << endl;
                } else {
                    cout << "No ha acertado. El número que debe adivinar es MAYOR que el que ha dicho." << endl;
                }
            }
        } // for

        // Preguntamos al usuario si desea seguir jugando
        cout << "¿Desea jugar otra vez? (s/n) ";
        cin >> desea_seguir;

    } while ( desea_seguir!='N' && desea_seguir!='n' );

    cout << endl << endl;

	return 0;
}
