#include <iostream>
#include <vector>
#include "Despacho.hpp"


Despacho::Despacho(std::string new_nombreDespacho, std::string new_ubicacionDespacho)
: nombreDespacho(new_nombreDespacho), ubicacionDespacho(new_ubicacionDespacho) {}
 
std::string Despacho::ver_despacho () {
    std::string bio = "Nombre: " + nombreDespacho; 
    bio += "\nUbicacion: " + ubicacionDespacho;
    std::string carpetas_string = "Carpetas:\n";
    for(std::string carpeta : carpetas) {
        carpetas_string += " - " + carpeta + "\n"; }

    return bio + "\n" + carpetas_string;
}

 

int main () {

    Despacho Desp1("Despacho prueba 1","Prados del Tecnologico, 76158 Santiago de Querétaro, Qro." );
    Desp1.add_carpeta("Carpeta 1");
    Desp1.add_carpeta("Carpeta 2");
    Desp1.add_carpeta("Carpeta 3");
    Desp1.add_carpeta("Carpeta 4");

    std::cout << Desp1.ver_despacho() << "\n";

    return 0;
}