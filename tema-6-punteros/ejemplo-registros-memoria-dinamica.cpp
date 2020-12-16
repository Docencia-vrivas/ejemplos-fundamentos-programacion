// Ejemplos de la clase del grupo B del 16-12-2020
#include <iostream>
#include <string>

using namespace std;


int main() {
    struct Ordenador {
       string marca;
      int RAM;
      double frecuencia;
    };
    
    // Creación de un struct en memoria estática
    Ordenador mi_portatil={"Asus", 6, 33.5 };

    /*
    // Creación de un struct Ordenador en memoria dinámica
    Ordenador *mi_pc=0;
    mi_pc=new Ordenador;
    (*mi_pc).frecuencia=43.2;
    mi_pc->marca="HP";
    mi_pc->RAM=2;

    cout << "Mi pc es de marca "<<mi_pc->marca<<endl;
    delete mi_pc;
    */

    /*
    // Creación de un vector de structs Ordenador en memoria dinámica
    Ordenador *mis_ordenadores=0;
    int num_ordenadores=0;
    cout << "¿Cuántos ordenadores tiene? (indicar un número mayor o igual que 2)";
    cin >> num_ordenadores;

    mis_ordenadores=new Ordenador[num_ordenadores];
    mis_ordenadores[1].marca="Dell";
    cout << "Mi pc es de marca "<<mis_ordenadores[1].marca<<endl;
    cout << "Mi pc es de marca "<<(mis_ordenadores+1)->marca<<endl;

    delete [] mis_ordenadores;
    */



    // struct compuesto de punteros a ordenadores
    struct Cliente_Servidor {
        Ordenador *cliente=0;
        Ordenador *servidor=0;
    };


    /*
    // Ejemplo de struct en memoria estática
    Cliente_Servidor navegador_web;
    navegador_web.cliente=new Ordenador;

    navegador_web.cliente->RAM=128;
    navegador_web.cliente->marca="Compaq";

    cout << "La marca del cliente es "
        << (*navegador_web.cliente).marca
        << " y su memoria es "
        << navegador_web.cliente->RAM << " GB"
        << endl;

    delete navegador_web.cliente;
    */


    // Ejemplo de struct en memoria dinámica
    Cliente_Servidor *app_bbdd=0;

    app_bbdd = new Cliente_Servidor;

    app_bbdd->cliente = new Ordenador;
    app_bbdd->servidor = &mi_portatil;

    cout << " La marca del servidor de bases de datos es "
        << app_bbdd->servidor->marca
        << endl;
    delete app_bbdd->cliente;
    delete app_bbdd;

    
    // Ejemplo de vector de structs en memoria dinámica
    Cliente_Servidor *muchos_c_s=new Cliente_Servidor[10];
    muchos_c_s[5].cliente=&mi_portatil;
    muchos_c_s[9].servidor=new Ordenador;
    muchos_c_s[9].servidor->marca="Acer";
    (muchos_c_s+4)->cliente=new Ordenador;

    delete muchos_c_s[9].servidor;
    delete (muchos_c_s+4)->cliente;
    delete [] muchos_c_s;
    return 0;
}
