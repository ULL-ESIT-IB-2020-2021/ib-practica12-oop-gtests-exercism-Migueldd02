#ifndef FECHAS_H
#define FECHAS_H

void parametros(int argc, char *arhv[]);

class Fecha{
    private:
        unsigned dia_;
        unsigned mes_;
        unsigned anyo_;
    public:
        Fecha(unsigned,unsigned,unsigned);
        
        void mostrar_fecha();
};





#endif