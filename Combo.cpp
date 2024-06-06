#include "Combo.h"

Combo::Combo(){
    nombre = " ";
    precio = 0;
    peso = 0;
    clave = 0;
}
Combo::Combo(string _nombre, int _precio,int _peso, int _clave){
    nombre = _nombre;
    precio = _precio;
    peso = _peso;
    clave = _clave;
}

string Combo::str(){
    return nombre + '-' + '$' + to_string(precio) + '-' + to_string(peso) + '-' + '$' + to_string(calculaTotalPagar()) + '-' + to_string(clave);
}
int Combo::calculaTotalPagar(){
    int total;
    int descuento;
    if (clave == 1){
        total = precio * peso * clave;
        descuento = (total/100) * 25;
        return total - descuento;
    }
    if (clave == 2){
        total = precio * peso * clave;
        descuento = (total/100) * 30;
        return total - descuento;
    }
    else {
        return precio * peso * clave;
    }
}