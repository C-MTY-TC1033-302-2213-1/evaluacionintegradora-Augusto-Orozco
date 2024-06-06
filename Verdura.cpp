#include "Verdura.h"

Verdura::Verdura(){
    nombre = " ";
    precio = 0;
    peso = 0; 
    temporada = "Invierno";
}
Verdura::Verdura(string _nombre, int _precio, int _peso, string _temporada){
    nombre = _nombre;
    precio = _precio;
    peso = _peso;
    temporada = _temporada;
}

string Verdura::str(){
    return nombre + '-' + '$' + to_string(precio) + '-' + to_string(peso) + '-' + '$' + to_string(calculaTotalPagar()) + '-' + temporada;
}
int Verdura::calculaTotalPagar(){
    if (temporada == "Junio") {
        return precio * peso * 2;
    }
    if (temporada == "Regalado") {
        return precio * peso * 3;
    }
    else {
        return precio * peso * 10;
    }
}