/*
@file tema2.cpp
@desc Ejemplos para explicar mejor el tema 2
@author vrivas@ujaen.es
@date 15/sep/2026
*/

#include <iostream>
using namespace std;

// Algunos ejemplos de constantes
const double PI = 3.14159;
const int DIAS_SEMANA = 7;
const char SI = 'S';
const char NO = 'N';

int main() {
    cout << "Cálculos con int" << endl;
    cout << 4 + 5 << endl;
    cout << 3 - 9 << endl;
    cout << 5 * 12 << endl;
    cout << 32 / 3 << endl;
    cout << 32 % 3 << endl;
    /*
    SALIDA:
    Cálculos con int
    9
    -6
    60
    10
    2
    */


    cout << "Comparaciones con int y números distintos" << endl;
    cout << (4 > 8) << endl;
    cout << (4 >= 8) << endl;
    cout << (4 < 8) << endl;
    cout << (4 <= 8) << endl;
    cout << (4 == 8) << endl;
    /*
    SALIDA:
    Comparaciones con int y números distintos
    0
    0
    1
    1
    0
    */

    cout << "Comparaciones con int y números iguales" << endl;
    cout << (4 < 4) << endl;
    cout << (4 <= 4) << endl;
    cout << (4 > 4) << endl;
    cout << (4 >= 4) << endl;
    cout << (4 == 4) << endl;
    /*
    SALIDA:
    Comparaciones con int y números iguales
    0
    1
    0
    1
    1
    */

    cout << "Cálculos con double" << endl;
    cout << 6.34 + 28.12 << endl;
    cout << 0.00002 - 19.234 << endl;
    cout << 6.0 * 3.5 << endl;
    cout << 32.0 / 3.1 << endl;
    /*
    SALIDA:
    Cálculos con double
    34.46
    -19.234
    21
    10.3226
    */

    cout << "Comparaciones con double y números distintos" << endl;
    cout << (6.8 > 9.5) << endl;
    cout << (6.8 >= 9.5) << endl;
    cout << (6.8 < 9.5) << endl;
    cout << (6.8 <= 9.5) << endl;
    cout << (6.8 == 9.5) << endl;
    /*
    SALIDA:
    Comparaciones con double y números distintos
    0
    0
    1
    1
    0
    */

    cout << "Comparaciones con double y números iguales" << endl;
    cout << (0.4 < 0.4) << endl;
    cout << (0.4 <= 0.4) << endl;
    cout << (0.4 > 0.4) << endl;
    cout << (0.4 >= 0.4) << endl;
    cout << (0.4 == 0.4) << endl;
    /*
    SALIDA:
    Comparaciones con double y números iguales
    0
    1
    0
    1
    1
    */

    cout << "Cálculos con char: casi nunca se usan" << endl;
    cout << 'a' + 'A' << endl;
    cout << 'a' - 'A' << endl;
    cout << 'a' * 'A' << endl;
    cout << 'a' / 'A' << endl;
    /*
    SALIDA:
    Cálculos con char: casi nunca se usan
    162
    32
    6305
    1
    */

    cout << "Comparaciones con char y letras distintas" << endl;
    cout << ('A' > 'B') << endl;
    cout << ('A' >= 'B') << endl;
    cout << ('A' < 'B') << endl;
    cout << ('A' <= 'B') << endl;
    cout << ('A' == 'B') << endl;
    /*
    SALIDA:
    Comparaciones con char y letras distintas
    0
    0
    1
    1
    0
    */

    cout << "Comparaciones con char y letras iguales" << endl;
    cout << ('D' < 'D') << endl;
    cout << ('D' <= 'D') << endl;
    cout << ('D' > 'D') << endl;
    cout << ('D' >= 'D') << endl;
    cout << ('D' == 'D') << endl;
    /*
    SALIDA:
    Comparaciones con char y letras iguales
    0
    1
    0
    1
    */

    cout << "Cálculos con bool: puedes usar and  o también &&" << endl;
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false and true) << endl;
    cout << (false and false) << endl;
    /*
    SALIDA:
    Cálculos con bool: puedes usar and  o también &&
    1
    0
    0
    0
    */

    cout << "Cálculos con bool:  puedes usar or o también ||" << endl;
    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false or true) << endl;
    cout << (false or false) << endl;
    /*
    SALIDA:
    Cálculos con bool:  puedes usar or o también ||
    1
    1
    1
    0
    */
   
    cout << "Cálculos con bool:  puedes usar not o también !" << endl;
    cout << (!true) << endl;
    cout << (not false) << endl;
    /*
    SALIDA:
    Cálculos con bool:  puedes usar not o también !
    0
    1
    */


    cout << "Usar constantes definidas arriba" << endl;
    cout << PI / 2 << endl;
    cout << DIAS_SEMANA * 15 << endl;
    cout << SI << endl;
    cout << NO << endl;
    /*
    SALIDA:
    Usar constantes definidas arriba
    1.57079
    105
    S
    N
    */

    cout << "Definir variables" << endl;
    int anioNacimiento = 2008;
    int edad = 2026 - anioNacimiento;
    cout << edad << endl;
    cout << edad * 365 << endl;

    double esperanzaDeVida = 80.3;
    cout << edad / esperanzaDeVida * 100 << endl;

    char letra = 'P';
    cout << (letra == 'K') << endl;
    cout << (letra == 'P') << endl;
    cout << (letra == SI) << endl;
    /*
    SALIDA:
    Definir variables
    18
    6570
    22.4159
    0
    1
    0
    */
    return 0;
}
