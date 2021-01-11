#include "complejo.h"
#include <iostream>

Complejo::Complejo(double _real = 0, double _imaginario = 0){
    real_ = _real;
    imaginario_ = _imaginario;
}

void Complejo::add(Complejo complejo1,Complejo complejo2){
    real_ = complejo1.real_ + complejo2.real_;
    imaginario_ = complejo1.imaginario_ + complejo2.imaginario_;
}

void Complejo::sub(Complejo complejo1,Complejo complejo2){
    real_ = complejo1.real_ - complejo2.real_;
    imaginario_ = complejo1.imaginario_ - complejo2.imaginario_;
}

void Complejo::print_add(){
    if(imaginario_ < 0){
        std::cout << "La suma del número es: " << real_ << " " << imaginario_ << "i" << std::endl;
    }else{
        std::cout << "La suma del número es: " << real_ << "+" << imaginario_ << "i" << std::endl;
    }
}

void Complejo::print_sub(){
    if(imaginario_ < 0){
        std::cout << "La resta del número es: " << real_ << "" << imaginario_ << "i" << std::endl;
    }else{
        std::cout << "La resta del número es: " << real_ << "+" << imaginario_ << "i" << std::endl;
    }
}