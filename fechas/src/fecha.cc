#include "fecha.h"
#include <iostream>
#include <fstream>
#include <string>
void parametros(int argc, char *argv[]){
    if(argc != 3){
        std::cout << "./fechas - Gestión de fechas" << std::endl;
        std::cout << "Modo de uso: ./fechas fichero_entrada.txt fichero_salida.txt" << std::endl;
        std::cout << "Pruebe ./fechas --help para más información" << std::endl;
    }
    std::string ayuda = argv[1];
    if(ayuda == "--help"){
        std::cout << "Este programa tiene como propósito gestionar fechas por medio de clases." << std::endl;
        std::cout << "Para su correcto uso introduza dos parametros además del ./fechas, el primero será el nombre del fichero de entrada y el segundo será el nombre del fichero de salida" << std::endl;
    }
}

Fecha::Fecha(unsigned _dia = 0, unsigned _mes = 0, unsigned _anyo = 0){
    dia_ = _dia;
    mes_ = _mes;
    anyo_ = _anyo;
}

void Fecha::mostrar_fecha(){
    
    std::cout << dia_ << "/" << mes_ << "/" << anyo_ << std::endl;
        
}
void mensaje_programa(){
    std::cout << "Este programa le da 3 fechas ordonedas cronológicamente por medio de clases y fstream." << std::endl;
}
