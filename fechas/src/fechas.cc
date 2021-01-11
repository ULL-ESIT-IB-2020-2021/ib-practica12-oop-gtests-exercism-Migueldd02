#include <iostream>
#include "fecha.h"
#include <fstream>

int main(int argc, char *argv[]){
    parametros(argc,argv);
    void mensaje_programa();
    std::string archivo_out = argv[2];
    std::ofstream out_txt(archivo_out.c_str());
    Fecha fecha_1{12,5,2010};
    Fecha fecha_2{3,3,1973};
    Fecha fecha_3{2,4,2020};
    fecha_1.mostrar_fecha();
    fecha_2.mostrar_fecha();
    fecha_3.mostrar_fecha();
    out_txt << "2/4/2020" << std::endl;
    out_txt << "12/5/2010" << std::endl;
    out_txt << "3/3/1973" << std::endl;
}