#ifndef AVANCE1PROYECTO_H
#define AVANCE1PROYECTO_H
#include <iostream>

class Despacho {

    private:
    
    std::string nombreDespacho;
    std::string ubicacionDespacho;
    std::vector<std::string> carpetas;

    public:

    Despacho(std::string new_nombreDespacho, std::string new_ubicacionDespacho);
    std::string view_carpetas();
    std::string ver_despacho();
    void add_carpeta (std::string new_carpeta);


    

};


#endif // AVANCE1PROYECTO_H
