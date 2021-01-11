#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo{
    private:
        double real_;
        double imaginario_;
           
    public:
        Complejo(double,double);
        void add(Complejo,Complejo);
        void sub(Complejo,Complejo);
        void print_add();   
        void print_sub();
        void add_real(Complejo,double);  
};

#endif