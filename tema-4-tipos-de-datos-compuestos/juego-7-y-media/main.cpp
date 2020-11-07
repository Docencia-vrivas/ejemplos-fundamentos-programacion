/**
Programa:       Juego de las 7 y media.
Autor:          Víctor Rivas <vrivas@ujaen.es>
Fecha:          07-Nov-2020
Versión:        1
Descripción:    Empezamos el programa que permite jugar a las 7 y media, declarando el strcut carta.
*/

#include <iostream>
#include <string>
using namespace std;
int main() {
    // Declaramos el struct carta
    struct Carta {
        // Valor es un char que puede tomar los valores de '1' a '7', más 'J' (Sota), 'Q' (Caballo) y 'K' (Rey)
        char valor;

        // Palo es un string que puede tomar los valores "Oros", "Copas", "Espadas" y "Bastos"
        string palo;

        // Puntuación toma los valores 1 a 7, y también 0.5 (todas las Sotas, Caballos y Reyes valen 0.5)
        double puntuacion;
    };

    // Ejemplo de carta
    Carta as_de_oros={'1',"Oros",1};
    Carta rey_de_espadas = {'K', "Espadas", 0.5 };

    cout << "As de oros es: " << as_de_oros.valor << "-" << as_de_oros.palo[0]
         << " ("<< as_de_oros.puntuacion << " ptos.)" << endl;
    cout << "Rey de espadas es: " << rey_de_espadas.valor << "-" << rey_de_espadas.palo[0]
         << " ("<< rey_de_espadas.puntuacion << " ptos.)" << endl;
}
